TARGET = cisco_pfcp
TEMPLATE = lib

CONFIG += plugin
CONFIG += no_plugin_name_prefix
CONFIG -= qt
CONFIG -= app_bundle
CONFIG += c++17
CONFIG += silent
CONFIG += object_parallel_to_source

QMAKE_CXXFLAGS += -Wpedantic -Wall -Wextra

DESTDIR = $$PWD/../../../../bin

REPODIR = $$clean_path($$PWD/../../../..)

SOURCES += $$files($$PWD/../../src/cisco_pfcp/*.c, true)

PLUGIN_VERSION=1.0.0
DEFINES += "PLUGIN_VERSION=\\\"$$PLUGIN_VERSION\\\""

INCLUDEPATH += \
    $$REPODIR/contrib/ext/wireshark-2.6.8 \
    $$REPODIR/contrib/ext/wireshark/include \
    $$REPODIR/contrib/ext/wireshark/include/linux

target.path = /usr/lib/x86_64-linux-gnu/wireshark/plugins/2.6/epan/
INSTALLS += target
