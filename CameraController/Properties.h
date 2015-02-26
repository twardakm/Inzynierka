#pragma once
#include <string>

class Properties
{
private:
	const std::string XMLFileName = "Properties.xml";
	bool ColorPreview;
	CString Source;
protected:
	void ReadFromXML();
	bool BooleanFromCString(CString C);
	CString CStringFromBoolean(bool B);
public:
	Properties();
	~Properties();

	bool GetColorPreview();
	void SetColorPreview(bool C);
	CString GetSource();
	void SetSource(CString S);
};

