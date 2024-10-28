//
// Created by Admin on 2024/10/25.
//


#include<QHBoxLayout>
#include<QVBoxLayout>
#include "dialog.h"
dialog::dialog(QWidget *parent) :QDialog(parent){
    setWindowTitle(tr("多线程服务器"));
    label11=new QLabel(tr("服务器端口:"));
    label12=new QLabel;
    quitBtn=new QPushButton(tr("exit"));
    QHBoxLayout *BtnLayout=new QHBoxLayout;
    BtnLayout->addStretch(1);
    BtnLayout->addWidget(quitBtn);
    BtnLayout->addStretch(1);
    QVBoxLayout *mainLayout=new QVBoxLayout(this);
    mainLayout->addWidget(label11);
    mainLayout->addWidget(label12);
    mainLayout->addLayout(BtnLayout);
    connect(quitBtn,SIGNAL(clicked()),this,SLOT(close()));
}