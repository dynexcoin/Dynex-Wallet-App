/********************************************************************************
** Form generated from reading UI file 'addressbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKDIALOG_H
#define UI_ADDRESSBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddressBookDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *m_addressBookView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_okButton;

    void setupUi(QDialog *AddressBookDialog)
    {
        if (AddressBookDialog->objectName().isEmpty())
            AddressBookDialog->setObjectName(QString::fromUtf8("AddressBookDialog"));
        AddressBookDialog->resize(747, 525);
        verticalLayout = new QVBoxLayout(AddressBookDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_addressBookView = new QTreeView(AddressBookDialog);
        m_addressBookView->setObjectName(QString::fromUtf8("m_addressBookView"));

        verticalLayout->addWidget(m_addressBookView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new QPushButton(AddressBookDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), AddressBookDialog, SLOT(accept()));
        QObject::connect(m_addressBookView, SIGNAL(doubleClicked(QModelIndex)), AddressBookDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddressBookDialog);
    } // setupUi

    void retranslateUi(QDialog *AddressBookDialog)
    {
        AddressBookDialog->setWindowTitle(QCoreApplication::translate("AddressBookDialog", "Select address", nullptr));
        m_okButton->setText(QCoreApplication::translate("AddressBookDialog", "Choose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressBookDialog: public Ui_AddressBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKDIALOG_H
