#include <QtGui/QApplication>
#include "diagramRecognizer.h"
#include <field.h>
#include <iostream>
#include <cstdio>
#include <graph.h>
#include <segmentator.h>
#include <link.h>
#include "recognizers/mixedGesturesManager.h"
#include "simpleFormsInitializer.h"
#include <QString>
#include <QDebug>

using namespace std;
class Read
{
public:
	static void readFile(QList < Component *> *comps)
	{
		FILE *f = fopen("test2.txt", "r");
		if (f == 0) { return; }
		int num, n;
		while (true)
		{
			fscanf(f, "%d %d\n", &num, &n);
			if ((num == 0) && (n == 0)) { break; }
			Component *component = new Component();
			component->num = num;
			for (int i = 0; i < n; i++)
			{
				int x, y;
				fscanf(f, "%d %d\n", &x, &y);
				component->push_back(SquarePos(x, y));
			}
			comps->push_back(component);
		}
	}
	static void make(Graph &graph)
	{
		Graph *g = new Graph(graph);
		delete g;

	}
};
int main()
{
	//QApplication a(argc, argv);
	//DiagramRecognizer widget;
	//widget.setGeometry(100, 100, 500, 355);
	//widget.show();
	QList < Component *> *comps = new QList < Component *>();
	Read::readFile(comps);
	Graph g(comps);
	Field f(comps);
	//DiagramRecognizer d();
	//GesturesManager *mGesturesManager = new MixedGesturesManager();
	//AbstractRecognizer *mAbstractRecognizer = new AbstractRecognizer(mGesturesManager,
	//											 SimpleFormsInitializer::initialForms());

//	QString s = mAbstractRecognizer->recognizeObject();
//	qDebug() << s;
	cout << Recognizer::getType(comps);
	/*QList < Component *> *shell = new QList < Component *>();
	QList < Component *>::iterator i = comps->begin();
	shell->push_back(*i++);
	shell->push_back(*i++);
	shell->push_back(*i++);
	shell->push_back(*i++);
	Link *link = new Link(comps->first());
	Component *c = link->getComponent();
	EFigure *figure = new EFigure(shell);
	//QList < Component *> *shell = Segmentator::getInnerShell(comps->first(), comps, g);
	Segmentator::ESegmentator segm(comps);
	segm.segmentateSection(figure);
	for (QList < Component *>::iterator i = shell->begin(); i != shell->end(); i++)
	{
		cout << (*i)->num << " ";
	}*/
	/*QList < QList < Component *> *> *segm = g.cSegmentation(comps, g);
	for (QList < QList < Component *> *>::iterator i = segm->begin(); i != segm->end(); i++)
	{
		QList < Component *> *list = *i;
		for (QList < Component *>::iterator itr = list->begin(); itr != list->end(); itr++)
		{
			cout << (*itr)->num << " ";
		}
		cout << endl;
	}*/
	//Component *cur = comps->first();
	//Field f(comps);
	//g.eraseEdge(cur);
	/*InterList *iList = g.getInterList();
	for (InterList::iterator i = iList->begin(); i != iList->end(); i++)
	{
		Component *cur = (*i).first;
		cout << (*i).first->num << ": ";
		QList < Component *> *list = (*i).second;
		for (QList < Component *>::iterator p = list->begin(); p != list->end(); p++)
		{
			cout << (*p)->num << " ";
		}
		cout << endl;
	}*/
	return 0;
}
