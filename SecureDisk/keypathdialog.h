#ifndef KEYPATHDIALOG_H
#define KEYPATHDIALOG_H

#include <QDialog>
#include "ui_keypathdialog.h"

#include "cryptocpp\rsa.h"
#include "cryptocpp\osrng.h"
#include "cryptocpp\files.h"

#include <qstring.h>

using namespace std;

class KeyPathDialog : public QDialog
{
	Q_OBJECT

public:
	KeyPathDialog(QWidget *parent = 0);
	~KeyPathDialog();
private:
	//void SavePublicKey(const QString& filename, const PublicKey& key);
	//void SavePrivateKey(const QString& filename, const PrivateKey& key);
	//void Save(const QString& filename, const BufferedTransformation& bt);
private slots:
	void accept();
private:
	Ui::KeyPathDialog ui;
};

#endif // KEYPATHDIALOG_H
