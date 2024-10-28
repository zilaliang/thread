//
// Created by Admin on 2024/10/26.
//

#ifndef UNTITLED_TIMESERVER_H
#define UNTITLED_TIMESERVER_H

#include "QtNetwork/qtcpserver.h"
#include "QtNetwork/qtcpsocket.h"
#include"dialog.h"

class Dialog;
class Timeserver {
    Q_OBJECT
public:
    Timeserver(QObject *parent=0);
protected:
    void incommingConnnect(qintptr socketDescriptor);
private:
    Dialog *dlg;
};


#endif //UNTITLED_TIMESERVER_H
