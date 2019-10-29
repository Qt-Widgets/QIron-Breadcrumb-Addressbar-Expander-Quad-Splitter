QT += core gui widgets

TEMPLATE = lib
DEFINES += QIRON_LIBRARY_EXPORT
TARGET = QIron
DESTDIR = $$PWD/../lib
DLLDESTDIR  = $$PWD/../bin

build_pass:CONFIG(debug, debug|release) {
	TARGET = $$join(TARGET,,,d)
}
macx {
	CONFIG += absolute_library_soname
}
include(Common/Common.pri)
include(QIrQuadSplitter/QIrQuadSplitter.pri)
include(QIrBreadCrumbBar/QIrBreadCrumbBar.pri)
include(QIrExpander/QIrExpander.pri)
