/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2012  TomÃ¡Å¡ PolednÃ½ <email>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "generatecertificatedialog.h"
#include <QVBoxLayout>
#include <QLabel>
#include <KLocale>

GenerateCertificateDialog::GenerateCertificateDialog(QWidget* parent, Qt::WFlags flags): KDialog(parent, flags) {
    initGUI();
}

GenerateCertificateDialog::~GenerateCertificateDialog() {

}

void GenerateCertificateDialog::initGUI() {
    setCaption(i18n("Create certificate"));
    QGridLayout* layout = new QGridLayout(mainWidget());
    //TODO use grid layout
//     QVBoxLayout* verticalLayout = new QVBoxLayout(mainWidget());

//     QHBoxLayout* horLCommonName = new QHBoxLayout(mainWidget());
//     verticalLayout->addLayout(horLCommonName);
    layout->addWidget(new QLabel(i18n("Common Name (CN):"), mainWidget()), 0, 0);

    m_txlCommonName = new QLineEdit("KMiniDLNA", mainWidget());
    layout->addWidget(m_txlCommonName, 0, 1);
    

//     QHBoxLayout* horLCountry = new QHBoxLayout(mainWidget());
//     verticalLayout->addLayout(horLCountry);
    layout->addWidget(new QLabel(i18n("Country (C):"), mainWidget()), 1, 0);

    m_txlCountryName = new QLineEdit(i18n("CZ"), mainWidget());
    layout->addWidget(m_txlCountryName, 1, 1);
}

QString GenerateCertificateDialog::commonName() {
    return m_txlCommonName->text();
}

QString GenerateCertificateDialog::country() {
    return m_txlCountryName->text();
}


