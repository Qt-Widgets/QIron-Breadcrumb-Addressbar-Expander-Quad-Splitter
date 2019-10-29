TEMPLATE = subdirs
CONFIG -= flat

SUBDIRS += \
        QIronLib \
        Expander \
        BreadCrumbBar \
        QuadSplitter

QIronLib.subdir = src
Expander.subdir = examples/Expander
BreadCrumbBar.subdir = examples/BreadCrumbBar
QuadSplitter.subdir = examples/QuadSplitter

Expander.depends = QIronLib
BreadCrumbBar.depends = QIronLib
QuadSplitter.depends = QIronLib


           	         
