#############################################################################
# Makefile for building: DiagramRecognizer
# Generated by qmake (2.01a) (Qt 4.8.4) on: Sun Mar 3 15:53:07 2013
# Project:  ../DiagramRecognizer/DiagramRecognizer.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/lib/qt4/mkspecs/linux-g++ -o Makefile ../DiagramRecognizer/DiagramRecognizer.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fstack-protector --param=ssp-buffer-size=4 -m32 -march=i686 -mtune=atom -fasynchronous-unwind-tables -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fstack-protector --param=ssp-buffer-size=4 -m32 -march=i686 -mtune=atom -fasynchronous-unwind-tables -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/lib/qt4/mkspecs/linux-g++ -I../DiagramRecognizer -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include -I. -I../DiagramRecognizer -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-z,relro
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = 
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../DiagramRecognizer/main.cpp \
		../DiagramRecognizer/bitmap.cpp \
		../DiagramRecognizer/output.cpp \
		../DiagramRecognizer/component.cpp \
		../DiagramRecognizer/diagramRecognizer.cpp \
		../DiagramRecognizer/formSegmentator.cpp \
		../DiagramRecognizer/simpleFormsInitializer.cpp \
		../DiagramRecognizer/recognizers/mixedGesturesManager.cpp \
		../DiagramRecognizer/recognizers/nearestPosGridGesturesManager.cpp \
		../DiagramRecognizer/recognizers/rectangleGesturesManager.cpp moc_output.cpp \
		moc_diagramRecognizer.cpp
OBJECTS       = main.o \
		bitmap.o \
		output.o \
		component.o \
		diagramRecognizer.o \
		formSegmentator.o \
		simpleFormsInitializer.o \
		mixedGesturesManager.o \
		nearestPosGridGesturesManager.o \
		rectangleGesturesManager.o \
		moc_output.o \
		moc_diagramRecognizer.o
DIST          = /usr/lib/qt4/mkspecs/common/unix.conf \
		/usr/lib/qt4/mkspecs/common/linux.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt4/mkspecs/common/g++-base.conf \
		/usr/lib/qt4/mkspecs/common/g++-unix.conf \
		/usr/lib/qt4/mkspecs/qconfig.pri \
		/usr/lib/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib/qt4/mkspecs/features/qt_config.prf \
		/usr/lib/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt4/mkspecs/features/default_pre.prf \
		/usr/lib/qt4/mkspecs/features/release.prf \
		/usr/lib/qt4/mkspecs/features/default_post.prf \
		/usr/lib/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib/qt4/mkspecs/features/warn_on.prf \
		/usr/lib/qt4/mkspecs/features/qt.prf \
		/usr/lib/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib/qt4/mkspecs/features/moc.prf \
		/usr/lib/qt4/mkspecs/features/resources.prf \
		/usr/lib/qt4/mkspecs/features/uic.prf \
		/usr/lib/qt4/mkspecs/features/yacc.prf \
		/usr/lib/qt4/mkspecs/features/lex.prf \
		/usr/lib/qt4/mkspecs/features/include_source_dir.prf \
		../DiagramRecognizer/DiagramRecognizer.pro
QMAKE_TARGET  = DiagramRecognizer
DESTDIR       = 
TARGET        = DiagramRecognizer

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: ../DiagramRecognizer/DiagramRecognizer.pro  /usr/lib/qt4/mkspecs/linux-g++/qmake.conf /usr/lib/qt4/mkspecs/common/unix.conf \
		/usr/lib/qt4/mkspecs/common/linux.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt4/mkspecs/common/g++-base.conf \
		/usr/lib/qt4/mkspecs/common/g++-unix.conf \
		/usr/lib/qt4/mkspecs/qconfig.pri \
		/usr/lib/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib/qt4/mkspecs/features/qt_config.prf \
		/usr/lib/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt4/mkspecs/features/default_pre.prf \
		/usr/lib/qt4/mkspecs/features/release.prf \
		/usr/lib/qt4/mkspecs/features/default_post.prf \
		/usr/lib/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib/qt4/mkspecs/features/warn_on.prf \
		/usr/lib/qt4/mkspecs/features/qt.prf \
		/usr/lib/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib/qt4/mkspecs/features/moc.prf \
		/usr/lib/qt4/mkspecs/features/resources.prf \
		/usr/lib/qt4/mkspecs/features/uic.prf \
		/usr/lib/qt4/mkspecs/features/yacc.prf \
		/usr/lib/qt4/mkspecs/features/lex.prf \
		/usr/lib/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/lib/qt4/mkspecs/linux-g++ -o Makefile ../DiagramRecognizer/DiagramRecognizer.pro
/usr/lib/qt4/mkspecs/common/unix.conf:
/usr/lib/qt4/mkspecs/common/linux.conf:
/usr/lib/qt4/mkspecs/common/gcc-base.conf:
/usr/lib/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/lib/qt4/mkspecs/common/g++-base.conf:
/usr/lib/qt4/mkspecs/common/g++-unix.conf:
/usr/lib/qt4/mkspecs/qconfig.pri:
/usr/lib/qt4/mkspecs/features/qt_functions.prf:
/usr/lib/qt4/mkspecs/features/qt_config.prf:
/usr/lib/qt4/mkspecs/features/exclusive_builds.prf:
/usr/lib/qt4/mkspecs/features/default_pre.prf:
/usr/lib/qt4/mkspecs/features/release.prf:
/usr/lib/qt4/mkspecs/features/default_post.prf:
/usr/lib/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/lib/qt4/mkspecs/features/warn_on.prf:
/usr/lib/qt4/mkspecs/features/qt.prf:
/usr/lib/qt4/mkspecs/features/unix/thread.prf:
/usr/lib/qt4/mkspecs/features/moc.prf:
/usr/lib/qt4/mkspecs/features/resources.prf:
/usr/lib/qt4/mkspecs/features/uic.prf:
/usr/lib/qt4/mkspecs/features/yacc.prf:
/usr/lib/qt4/mkspecs/features/lex.prf:
/usr/lib/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/lib/qt4/mkspecs/linux-g++ -o Makefile ../DiagramRecognizer/DiagramRecognizer.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/DiagramRecognizer1.0.0 || $(MKDIR) .tmp/DiagramRecognizer1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/DiagramRecognizer1.0.0/ && $(COPY_FILE) --parents ../DiagramRecognizer/geometricForms.h ../DiagramRecognizer/bitmap.h ../DiagramRecognizer/abstractRecognizer.h ../DiagramRecognizer/recognizers/curveKeyBuilder.h ../DiagramRecognizer/output.h ../DiagramRecognizer/component.h ../DiagramRecognizer/diagramRecognizer.h ../DiagramRecognizer/formSegmentator.h ../DiagramRecognizer/simpleFormsInitializer.h ../DiagramRecognizer/recognizers/mixedGesturesManager.h recognizers/nearestPosGridGesturesmanager.h ../DiagramRecognizer/recognizers/rectangleGesturesManager.h .tmp/DiagramRecognizer1.0.0/ && $(COPY_FILE) --parents ../DiagramRecognizer/main.cpp ../DiagramRecognizer/bitmap.cpp ../DiagramRecognizer/output.cpp ../DiagramRecognizer/component.cpp ../DiagramRecognizer/diagramRecognizer.cpp ../DiagramRecognizer/formSegmentator.cpp ../DiagramRecognizer/simpleFormsInitializer.cpp ../DiagramRecognizer/recognizers/mixedGesturesManager.cpp ../DiagramRecognizer/recognizers/nearestPosGridGesturesManager.cpp ../DiagramRecognizer/recognizers/rectangleGesturesManager.cpp .tmp/DiagramRecognizer1.0.0/ && (cd `dirname .tmp/DiagramRecognizer1.0.0` && $(TAR) DiagramRecognizer1.0.0.tar DiagramRecognizer1.0.0 && $(COMPRESS) DiagramRecognizer1.0.0.tar) && $(MOVE) `dirname .tmp/DiagramRecognizer1.0.0`/DiagramRecognizer1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/DiagramRecognizer1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_output.cpp moc_diagramRecognizer.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_output.cpp moc_diagramRecognizer.cpp
moc_output.cpp: ../DiagramRecognizer/component.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/bitmap.h \
		../DiagramRecognizer/formSegmentator.h \
		../DiagramRecognizer/output.h
	/usr/lib/qt4/bin/moc $(DEFINES) $(INCPATH) ../DiagramRecognizer/output.h -o moc_output.cpp

moc_diagramRecognizer.cpp: ../DiagramRecognizer/bitmap.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/component.h \
		../DiagramRecognizer/formSegmentator.h \
		../DiagramRecognizer/abstractRecognizer.h \
		../DiagramRecognizer/paintManager.h \
		../DiagramRecognizer/diagramRecognizer.h
	/usr/lib/qt4/bin/moc $(DEFINES) $(INCPATH) ../DiagramRecognizer/diagramRecognizer.h -o moc_diagramRecognizer.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.o: ../DiagramRecognizer/main.cpp ../DiagramRecognizer/diagramRecognizer.h \
		../DiagramRecognizer/bitmap.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/component.h \
		../DiagramRecognizer/formSegmentator.h \
		../DiagramRecognizer/abstractRecognizer.h \
		../DiagramRecognizer/paintManager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../DiagramRecognizer/main.cpp

bitmap.o: ../DiagramRecognizer/bitmap.cpp ../DiagramRecognizer/bitmap.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/component.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bitmap.o ../DiagramRecognizer/bitmap.cpp

output.o: ../DiagramRecognizer/output.cpp ../DiagramRecognizer/output.h \
		../DiagramRecognizer/component.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/bitmap.h \
		../DiagramRecognizer/formSegmentator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o output.o ../DiagramRecognizer/output.cpp

component.o: ../DiagramRecognizer/component.cpp ../DiagramRecognizer/component.h \
		../DiagramRecognizer/geometricForms.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o component.o ../DiagramRecognizer/component.cpp

diagramRecognizer.o: ../DiagramRecognizer/diagramRecognizer.cpp ../DiagramRecognizer/diagramRecognizer.h \
		../DiagramRecognizer/bitmap.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/component.h \
		../DiagramRecognizer/formSegmentator.h \
		../DiagramRecognizer/abstractRecognizer.h \
		../DiagramRecognizer/paintManager.h \
		../DiagramRecognizer/simpleFormsInitializer.h \
		../DiagramRecognizer/recognizers/mixedGesturesManager.h \
		../DiagramRecognizer/output.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o diagramRecognizer.o ../DiagramRecognizer/diagramRecognizer.cpp

formSegmentator.o: ../DiagramRecognizer/formSegmentator.cpp ../DiagramRecognizer/formSegmentator.h \
		../DiagramRecognizer/bitmap.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/component.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o formSegmentator.o ../DiagramRecognizer/formSegmentator.cpp

simpleFormsInitializer.o: ../DiagramRecognizer/simpleFormsInitializer.cpp ../DiagramRecognizer/simpleFormsInitializer.h \
		../DiagramRecognizer/geometricForms.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o simpleFormsInitializer.o ../DiagramRecognizer/simpleFormsInitializer.cpp

mixedGesturesManager.o: ../DiagramRecognizer/recognizers/mixedGesturesManager.cpp ../DiagramRecognizer/recognizers/mixedGesturesManager.h \
		../DiagramRecognizer/abstractRecognizer.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/paintManager.h \
		../DiagramRecognizer/recognizers/rectangleGesturesManager.h \
		../DiagramRecognizer/recognizers/nearestPosGridGesturesManager.h \
		../DiagramRecognizer/recognizers/curveKeyBuilder.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mixedGesturesManager.o ../DiagramRecognizer/recognizers/mixedGesturesManager.cpp

nearestPosGridGesturesManager.o: ../DiagramRecognizer/recognizers/nearestPosGridGesturesManager.cpp ../DiagramRecognizer/recognizers/nearestPosGridGesturesManager.h \
		../DiagramRecognizer/abstractRecognizer.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/paintManager.h \
		../DiagramRecognizer/recognizers/curveKeyBuilder.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o nearestPosGridGesturesManager.o ../DiagramRecognizer/recognizers/nearestPosGridGesturesManager.cpp

rectangleGesturesManager.o: ../DiagramRecognizer/recognizers/rectangleGesturesManager.cpp ../DiagramRecognizer/recognizers/rectangleGesturesManager.h \
		../DiagramRecognizer/abstractRecognizer.h \
		../DiagramRecognizer/geometricForms.h \
		../DiagramRecognizer/paintManager.h \
		../DiagramRecognizer/recognizers/curveKeyBuilder.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o rectangleGesturesManager.o ../DiagramRecognizer/recognizers/rectangleGesturesManager.cpp

moc_output.o: moc_output.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_output.o moc_output.cpp

moc_diagramRecognizer.o: moc_diagramRecognizer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_diagramRecognizer.o moc_diagramRecognizer.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

