﻿#ifndef EQUIPMENTWIDGET_H
#define EQUIPMENTWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QString>


class dialpan;
class QPushButton;


class EquipmentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit EquipmentWidget(QWidget *parent = 0);

    ~EquipmentWidget();
    bool updateLableValue(int labelIndex,int value);
    // void updateLabelInfo(int labelName, int status, QString info);
    // bool updateLabelVlaue(int labelIndex, int status);
    // int getGasNd(){return lNongDuLabelStatus;}
    void setTitle(QString title);

    void setVisible(int i);

signals:
    
public slots:

protected:
   void paintEvent(QPaintEvent *event);

private:
    QLabel *lLightLabel;

    QLabel *lNongDuLabel;
    QString lNongDuLabelName;
    QString lNongDuLabelValue;

    QLabel *lOnOrOffLabel;
    QString lOnOrOffLabelName;
    QString lOnOrOffLabelValue;

    QLabel *lWorkOrBreakLabel;
    QString lWorkOrBreakLabelName;
    QString lWorkOrBreakLabelValue;


    QLabel *lWaringLabel;
    QString lWaringLabelName;
    QString lWaringLabelValue;


    dialpan *dPan;

    QLabel*ltitle;


    void initLables();
    void setLabels();

    void updateLables();

    int gasValue;
    int onOffValue;
    int workBreakValue;
    int waringValue;
    int waringLevelValue;
    QLabel *infoLabel;


//    QPushButton*qb1;
//    QPushButton*qb2;

    
};

#endif // EQUIPMENTWIDGET_H
