#include "string"
using namespace std;
// ================================================================================================
namespace LearnAutomatonV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaPontuacao
	/// </summary>
	public ref class TelaPontuacao : public System::Windows::Forms::Form
	{
	public:
		TelaPontuacao(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			Pontos = 0;
		}

		void setPontos(int P){

			Lb_Pontuacao->Text = Convert::ToString(P);

		}

		void getNome(char[25]);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaPontuacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Btn_Pont_Menu;
	private: System::Windows::Forms::Label^  Lb_Pontuacao;
	private: System::Windows::Forms::TextBox^  TxB_NomeUsuario;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  Lb_Auxiliar;

		int Pontos;

		String^ str;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaPontuacao::typeid));
			this->Btn_Pont_Menu = (gcnew System::Windows::Forms::Button());
			this->Lb_Pontuacao = (gcnew System::Windows::Forms::Label());
			this->TxB_NomeUsuario = (gcnew System::Windows::Forms::TextBox());
			this->Lb_Auxiliar = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Btn_Pont_Menu
			// 
			this->Btn_Pont_Menu->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Pont_Menu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Pont_Menu.BackgroundImage")));
			this->Btn_Pont_Menu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Pont_Menu->FlatAppearance->BorderSize = 0;
			this->Btn_Pont_Menu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Pont_Menu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Pont_Menu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Pont_Menu->Location = System::Drawing::Point(109, 22);
			this->Btn_Pont_Menu->Name = L"Btn_Pont_Menu";
			this->Btn_Pont_Menu->Size = System::Drawing::Size(220, 40);
			this->Btn_Pont_Menu->TabIndex = 25;
			this->Btn_Pont_Menu->UseVisualStyleBackColor = false;
			this->Btn_Pont_Menu->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPontuacao::Btn_Pont_Menu_MouseClick);
			// 
			// Lb_Pontuacao
			// 
			this->Lb_Pontuacao->AutoSize = true;
			this->Lb_Pontuacao->BackColor = System::Drawing::Color::Transparent;
			this->Lb_Pontuacao->Font = (gcnew System::Drawing::Font(L"Papyrus", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_Pontuacao->Location = System::Drawing::Point(586, 453);
			this->Lb_Pontuacao->Name = L"Lb_Pontuacao";
			this->Lb_Pontuacao->Size = System::Drawing::Size(91, 76);
			this->Lb_Pontuacao->TabIndex = 26;
			this->Lb_Pontuacao->Text = L"__";
			// 
			// TxB_NomeUsuario
			// 
			this->TxB_NomeUsuario->Location = System::Drawing::Point(400, 229);
			this->TxB_NomeUsuario->Name = L"TxB_NomeUsuario";
			this->TxB_NomeUsuario->Size = System::Drawing::Size(442, 20);
			this->TxB_NomeUsuario->TabIndex = 27;
			this->TxB_NomeUsuario->Leave += gcnew System::EventHandler(this, &TelaPontuacao::TxB_NomeUsuario_Leave);
			// 
			// Lb_Auxiliar
			// 
			this->Lb_Auxiliar->AutoSize = true;
			this->Lb_Auxiliar->BackColor = System::Drawing::Color::Transparent;
			this->Lb_Auxiliar->Font = (gcnew System::Drawing::Font(L"Papyrus", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_Auxiliar->Location = System::Drawing::Point(662, 453);
			this->Lb_Auxiliar->Name = L"Lb_Auxiliar";
			this->Lb_Auxiliar->Size = System::Drawing::Size(120, 76);
			this->Lb_Auxiliar->TabIndex = 28;
			this->Lb_Auxiliar->Text = L"/10";
			// 
			// TelaPontuacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1184, 662);
			this->Controls->Add(this->Lb_Auxiliar);
			this->Controls->Add(this->TxB_NomeUsuario);
			this->Controls->Add(this->Lb_Pontuacao);
			this->Controls->Add(this->Btn_Pont_Menu);
			this->Name = L"TelaPontuacao";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormPontuacao";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaPontuacao::FormPontuacao_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
// ================================================================================================
#pragma endregion
	private: System::Void Btn_Pont_Menu_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				
				 Lb_Pontuacao->Text = "__";
				 TxB_NomeUsuario->Text = "";
				 this->Visible = true;
				 this->Close();

	}
// ================================================================================================
	private: System::Void FormPontuacao_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

				 
				 Lb_Pontuacao->Text = "__";
				 TxB_NomeUsuario->Text = "";
				 this->Visible = true;
				 this->Close();
	}
// ================================================================================================
	private: System::Void TxB_NomeUsuario_Leave(System::Object^  sender, System::EventArgs^  e) {

				 str = Convert::ToString(TxB_NomeUsuario->Text);
			 
	}
};
}
