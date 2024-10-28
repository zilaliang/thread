//
// Created by Admin on 2024/10/25.
//

#ifndef UNTITLED_DIALOG_H
#define UNTITLED_DIALOG_H
#include<QDialog>
#include<QLabel>
#include<QPushButton>

class dialog:public QDialog {
    Q_OBJECT
public:
    dialog(QWidget *parent=0);
//    ~dialog();
private:
    QLabel *label11;
    QLabel *label12;
    QPushButton *quitBtn;
};


#endif //UNTITLED_DIALOG_H
