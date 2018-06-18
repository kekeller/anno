/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *introduction;
    QLabel *license;
    QLabel *sourceCodeLocation;
    QLabel *version;
    QLabel *versionNumber;
    QLabel *sourceCodeLocation_2;

    void setupUi(QDialog *aboutDialog)
    {
        if (aboutDialog->objectName().isEmpty())
            aboutDialog->setObjectName(QStringLiteral("aboutDialog"));
        aboutDialog->resize(362, 356);
        aboutDialog->setModal(true);
        buttonBox = new QDialogButtonBox(aboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 310, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        introduction = new QLabel(aboutDialog);
        introduction->setObjectName(QStringLiteral("introduction"));
        introduction->setGeometry(QRect(30, 20, 311, 61));
        introduction->setTextFormat(Qt::AutoText);
        introduction->setWordWrap(true);
        license = new QLabel(aboutDialog);
        license->setObjectName(QStringLiteral("license"));
        license->setGeometry(QRect(30, 270, 311, 16));
        license->setOpenExternalLinks(true);
        sourceCodeLocation = new QLabel(aboutDialog);
        sourceCodeLocation->setObjectName(QStringLiteral("sourceCodeLocation"));
        sourceCodeLocation->setGeometry(QRect(30, 200, 311, 51));
        sourceCodeLocation->setOpenExternalLinks(true);
        version = new QLabel(aboutDialog);
        version->setObjectName(QStringLiteral("version"));
        version->setGeometry(QRect(30, 100, 61, 16));
        versionNumber = new QLabel(aboutDialog);
        versionNumber->setObjectName(QStringLiteral("versionNumber"));
        versionNumber->setGeometry(QRect(100, 100, 81, 16));
        sourceCodeLocation_2 = new QLabel(aboutDialog);
        sourceCodeLocation_2->setObjectName(QStringLiteral("sourceCodeLocation_2"));
        sourceCodeLocation_2->setGeometry(QRect(30, 140, 311, 51));
        sourceCodeLocation_2->setOpenExternalLinks(true);

        retranslateUi(aboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), aboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), aboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(aboutDialog);
    } // setupUi

    void retranslateUi(QDialog *aboutDialog)
    {
        aboutDialog->setWindowTitle(QApplication::translate("aboutDialog", "About anno", 0));
        introduction->setText(QApplication::translate("aboutDialog", "<html><head/><body><p><span style=\" font-style:italic;\">anno</span> &nbsp;is a desktop application that can be used to annotate images, mainly for semantic segmentation purposes.</p></body></html>", 0));
        license->setText(QApplication::translate("aboutDialog", "The application is released under the <a href=\"https://github.com/reunanen/anno/blob/master/LICENSE\">MIT license</a>.", 0));
        sourceCodeLocation->setText(QApplication::translate("aboutDialog", "<html><head/><body><p>The source code is available here:<br/>https://github.com/kekeller/anno</p></body></html>", 0));
        version->setText(QApplication::translate("aboutDialog", "Version:", 0));
        versionNumber->setText(QApplication::translate("aboutDialog", "unofficial", 0));
        sourceCodeLocation_2->setText(QApplication::translate("aboutDialog", "<html><head/><body><p>Original Copyright (c) 2017 Juha Reunanen/Tomaattinen Ltd</p><p>Modified Program Copyright (c) 2018 Kevin Keller </p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class aboutDialog: public Ui_aboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
