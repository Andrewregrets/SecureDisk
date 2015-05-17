#include "keypathdialog.h"

#define PUBLIC_KEY "rsa-public.key"
#define PRIVATE_KEY "rsa-private.key"


using namespace CryptoPP;

KeyPathDialog::KeyPathDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
}

KeyPathDialog::~KeyPathDialog()
{

}

void KeyPathDialog::accept()
{
	QString path = ui.filePathLineEdit->text();
	AutoSeededRandomPool rnd;
	RSA::PrivateKey rsaPrivate;
	rsaPrivate.GenerateRandomWithKeySize(rnd, 2048);
	
	RSA::PublicKey rsaPublic(rsaPrivate);
	/*SavePrivateKey(path + QString(PRIVATE_KEY), rsaPrivate);
	SavePublicKey(path + QString(PUBLIC_KEY), rsaPublic);*/
}
//
//void KeyPathDialog::SavePublicKey(const QString& filename, const PublicKey& key)
//{
//	ByteQueue queue;
//	key.Save(queue);
//
//	Save(filename, queue);
//}
//
//void KeyPathDialog::SavePublicKey(const QString& filename, const PublicKey& key)
//{
//	ByteQueue queue;
//	key.Save(queue);
//
//	Save(filename, queue);
//}
//
//void KeyPathDialog::SavePrivateKey(const QString& filename, const PrivateKey& key)
//{
//	ByteQueue queue;
//	key.Save(queue);
//
//	Save(filename, queue);
//}
//
//void Save(const QString& filename, const BufferedTransformation& bt)
//{
//	FileSink file(filename.toStdString().c_str());
//
//	bt.CopyTo(file);
//	file.MessageEnd();
//}