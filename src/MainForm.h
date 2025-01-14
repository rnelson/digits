//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdFinger.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TLabel *QueryLabel;
	TLabel *ServerLabel;
	TEdit *QueryEdit;
	TEdit *ServerEdit;
	TButton *FingerButton;
	TMemo *ResultMemo;
	TIdFinger *IdFinger;
	void __fastcall QueryEditKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall ServerEditKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall FingerButtonClick(TObject *Sender);
private:	// User declarations
	void __fastcall DoFinger();
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
