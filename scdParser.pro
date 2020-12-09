######################################################################
# Automatically generated by qmake (3.1) Mon Dec 7 10:09:27 2020
######################################################################

TEMPLATE = app
TARGET = scdParser
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += gen_list.h \
           glbtypes.h \
           mem_chk.h \
           scdParse_export.h \
           scl.h \
           sclPub.h \
           slog.h \
           str_util.h \
           sx_arb.h \
           sx_defs.h \
           sysincs.h \
           time_str.h
SOURCES += genlists.c \
           sclparse.c \
           sclPub.c \
           sclstore.c \
           slog.c \
           str_util.c \
           sx_dec.c \
           sx_enc.c \
           testScdPaser.cpp \
           time_str.c
