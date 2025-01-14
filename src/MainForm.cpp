//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::QueryEditKeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == 10 || Key == 13) {
		this->DoFinger();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::ServerEditKeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == 10 || Key == 13) {
		this->DoFinger();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::FingerButtonClick(TObject *Sender)
{
    this->DoFinger();
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::DoFinger()
{
	WideString query = QueryEdit->Text.Trim();
	WideString server = ServerEdit->Text.Trim();

	if (query == "" || server == "") {
        return;
	}

	ResultMemo->Clear();

	IdFinger->Host = server;
	IdFinger->Query = query;
	WideString result = IdFinger->Finger();

    ResultMemo->SelText = result;
}
//---------------------------------------------------------------------------

