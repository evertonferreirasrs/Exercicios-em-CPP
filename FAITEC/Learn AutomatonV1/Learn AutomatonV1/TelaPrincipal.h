#ifndef TelaP_H
#define TelaP_H
// ================================================================================================

namespace LearnAutomatonV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaPrincipal
	/// </summary>
	public ref class TelaPrincipal : public System::Windows::Forms::Form
	{
	public:
		TelaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			StatusTelaPrincipal = -1;
			
		}

		int getStatusTelaPrincipal(void){

			return StatusTelaPrincipal;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  Btn_Sobre;
	private: System::Windows::Forms::Button^  Btn_Teoria;
	private: System::Windows::Forms::Button^  Btn_CriarAuto;
	private: System::Windows::Forms::Button^  Btn_Quiz;
	private: System::Windows::Forms::Button^  Btn_Ranking;
	private: System::Windows::Forms::Button^  Btn_Sair;
			 			 			 

		int StatusTelaPrincipal;
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaPrincipal::typeid));
			this->Btn_Sobre = (gcnew System::Windows::Forms::Button());
			this->Btn_Teoria = (gcnew System::Windows::Forms::Button());
			this->Btn_CriarAuto = (gcnew System::Windows::Forms::Button());
			this->Btn_Quiz = (gcnew System::Windows::Forms::Button());
			this->Btn_Ranking = (gcnew System::Windows::Forms::Button());
			this->Btn_Sair = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn_Sobre
			// 
			this->Btn_Sobre->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Sobre->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Sobre.BackgroundImage")));
			this->Btn_Sobre->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Sobre->FlatAppearance->BorderSize = 0;
			this->Btn_Sobre->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Sobre->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Sobre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Sobre->Location = System::Drawing::Point(511, 461);
			this->Btn_Sobre->Name = L"Btn_Sobre";
			this->Btn_Sobre->Size = System::Drawing::Size(200, 185);
			this->Btn_Sobre->TabIndex = 0;
			this->Btn_Sobre->UseVisualStyleBackColor = false;
			this->Btn_Sobre->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPrincipal::Btn_Sobre_MouseClick);
			this->Btn_Sobre->MouseLeave += gcnew System::EventHandler(this, &TelaPrincipal::Btn_Sobre_MouseLeave);
			this->Btn_Sobre->MouseHover += gcnew System::EventHandler(this, &TelaPrincipal::Btn_Sobre_MouseHover);
			// 
			// Btn_Teoria
			// 
			this->Btn_Teoria->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Teoria->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Teoria.BackgroundImage")));
			this->Btn_Teoria->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Teoria->FlatAppearance->BorderSize = 0;
			this->Btn_Teoria->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Teoria->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Teoria->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Teoria->Location = System::Drawing::Point(78, 12);
			this->Btn_Teoria->Name = L"Btn_Teoria";
			this->Btn_Teoria->Size = System::Drawing::Size(200, 185);
			this->Btn_Teoria->TabIndex = 1;
			this->Btn_Teoria->UseVisualStyleBackColor = false;
			this->Btn_Teoria->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPrincipal::Btn_Teoria_MouseClick);
			this->Btn_Teoria->MouseLeave += gcnew System::EventHandler(this, &TelaPrincipal::Btn_Teoria_MouseLeave);
			this->Btn_Teoria->MouseHover += gcnew System::EventHandler(this, &TelaPrincipal::button1_MouseHover);
			// 
			// Btn_CriarAuto
			// 
			this->Btn_CriarAuto->BackColor = System::Drawing::Color::Transparent;
			this->Btn_CriarAuto->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_CriarAuto.BackgroundImage")));
			this->Btn_CriarAuto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_CriarAuto->FlatAppearance->BorderSize = 0;
			this->Btn_CriarAuto->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_CriarAuto->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_CriarAuto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_CriarAuto->Location = System::Drawing::Point(496, 12);
			this->Btn_CriarAuto->Name = L"Btn_CriarAuto";
			this->Btn_CriarAuto->Size = System::Drawing::Size(200, 185);
			this->Btn_CriarAuto->TabIndex = 2;
			this->Btn_CriarAuto->UseVisualStyleBackColor = false;
			this->Btn_CriarAuto->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPrincipal::Btn_CriarAuto_MouseClick);
			this->Btn_CriarAuto->MouseLeave += gcnew System::EventHandler(this, &TelaPrincipal::Btn_CriarAuto_MouseLeave);
			this->Btn_CriarAuto->MouseHover += gcnew System::EventHandler(this, &TelaPrincipal::Btn_CriarAuto_MouseHover);
			// 
			// Btn_Quiz
			// 
			this->Btn_Quiz->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Quiz->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Quiz.BackgroundImage")));
			this->Btn_Quiz->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Quiz->FlatAppearance->BorderSize = 0;
			this->Btn_Quiz->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Quiz->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Quiz->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Quiz->Location = System::Drawing::Point(928, 70);
			this->Btn_Quiz->Name = L"Btn_Quiz";
			this->Btn_Quiz->Size = System::Drawing::Size(200, 185);
			this->Btn_Quiz->TabIndex = 3;
			this->Btn_Quiz->UseVisualStyleBackColor = false;
			this->Btn_Quiz->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPrincipal::Btn_Quiz_MouseClick);
			this->Btn_Quiz->MouseLeave += gcnew System::EventHandler(this, &TelaPrincipal::Btn_Quiz_MouseLeave);
			this->Btn_Quiz->MouseHover += gcnew System::EventHandler(this, &TelaPrincipal::Btn_Quiz_MouseHover);
			// 
			// Btn_Ranking
			// 
			this->Btn_Ranking->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Ranking->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Ranking.BackgroundImage")));
			this->Btn_Ranking->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Ranking->FlatAppearance->BorderSize = 0;
			this->Btn_Ranking->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Ranking->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Ranking->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Ranking->Location = System::Drawing::Point(880, 408);
			this->Btn_Ranking->Name = L"Btn_Ranking";
			this->Btn_Ranking->Size = System::Drawing::Size(200, 185);
			this->Btn_Ranking->TabIndex = 4;
			this->Btn_Ranking->UseVisualStyleBackColor = false;
			this->Btn_Ranking->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPrincipal::Btn_Ranking_MouseClick);
			this->Btn_Ranking->MouseLeave += gcnew System::EventHandler(this, &TelaPrincipal::Btn_Ranking_MouseLeave);
			this->Btn_Ranking->MouseHover += gcnew System::EventHandler(this, &TelaPrincipal::Btn_Ranking_MouseHover);
			// 
			// Btn_Sair
			// 
			this->Btn_Sair->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Sair->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Sair.BackgroundImage")));
			this->Btn_Sair->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Sair->FlatAppearance->BorderSize = 0;
			this->Btn_Sair->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Sair->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Sair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Sair->Location = System::Drawing::Point(104, 461);
			this->Btn_Sair->Name = L"Btn_Sair";
			this->Btn_Sair->Size = System::Drawing::Size(200, 185);
			this->Btn_Sair->TabIndex = 5;
			this->Btn_Sair->UseVisualStyleBackColor = false;
			this->Btn_Sair->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPrincipal::Btn_Sair_MouseClick);
			this->Btn_Sair->MouseLeave += gcnew System::EventHandler(this, &TelaPrincipal::Btn_Sair_MouseLeave);
			this->Btn_Sair->MouseHover += gcnew System::EventHandler(this, &TelaPrincipal::Btn_Sair_MouseHover);
			// 
			// TelaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1180, 658);
			this->Controls->Add(this->Btn_Sair);
			this->Controls->Add(this->Btn_Ranking);
			this->Controls->Add(this->Btn_Quiz);
			this->Controls->Add(this->Btn_CriarAuto);
			this->Controls->Add(this->Btn_Teoria);
			this->Controls->Add(this->Btn_Sobre);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TelaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaPrincipal";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaPrincipal::TelaPrincipal_FormClosed);
			this->ResumeLayout(false);

		}
// ================================================================================================
#pragma endregion
private: System::Void TelaPrincipal_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

	StatusTelaPrincipal = 0;
	this->Visible = false;

}
// ================================================================================================
private: System::Void Btn_Sobre_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	StatusTelaPrincipal = 5;
	this->Visible = false;

}
 // ================================================================================================
private: System::Void Btn_Sobre_MouseHover(System::Object^  sender, System::EventArgs^  e) {

	Btn_Sobre->Image = Image::FromFile("..\\Img\\SobreOn.png");
				 				 				
}
// ================================================================================================
private: System::Void Btn_Sobre_MouseLeave(System::Object^  sender, System::EventArgs^  e) {

	Btn_Sobre->Image = Image::FromFile("..\\Img\\SobreOff.png"); //210x196 tamanho das imgs

}
// ================================================================================================
private: System::Void button1_MouseHover(System::Object^  sender, System::EventArgs^  e) {

	Btn_Teoria->Image = Image::FromFile("..\\Img\\TeoriaOn.png");

}
// ================================================================================================
private: System::Void Btn_Teoria_MouseLeave(System::Object^  sender, System::EventArgs^  e) {

	Btn_Teoria->Image = Image::FromFile("..\\Img\\TeoriaOff.png");

}
// ================================================================================================
private: System::Void Btn_CriarAuto_MouseHover(System::Object^  sender, System::EventArgs^  e) {

	Btn_CriarAuto->Image = Image::FromFile("..\\Img\\CriarOn.png");

}
// ================================================================================================
private: System::Void Btn_CriarAuto_MouseLeave(System::Object^  sender, System::EventArgs^  e) {

	Btn_CriarAuto->Image = Image::FromFile("..\\Img\\CriarOff.png");

}
// ================================================================================================
private: System::Void Btn_Quiz_MouseHover(System::Object^  sender, System::EventArgs^  e) {

	Btn_Quiz->Image = Image::FromFile("..\\Img\\QuizOn.png");

}
// ================================================================================================
private: System::Void Btn_Quiz_MouseLeave(System::Object^  sender, System::EventArgs^  e) {

	Btn_Quiz->Image = Image::FromFile("..\\Img\\QuizOff.png");

}
// ================================================================================================
private: System::Void Btn_Ranking_MouseHover(System::Object^  sender, System::EventArgs^  e) {

	Btn_Ranking->Image = Image::FromFile("..\\Img\\RankingOn.png");

}
 // ================================================================================================
private: System::Void Btn_Ranking_MouseLeave(System::Object^  sender, System::EventArgs^  e) {

	Btn_Ranking->Image = Image::FromFile("..\\Img\\RankingOff.png");

}
// ================================================================================================
private: System::Void Btn_Sair_MouseHover(System::Object^  sender, System::EventArgs^  e) {

	Btn_Sair->Image = Image::FromFile("..\\Img\\SairOn.png");

}
// ================================================================================================
private: System::Void Btn_Sair_MouseLeave(System::Object^  sender, System::EventArgs^  e) {

	Btn_Sair->Image = Image::FromFile("..\\Img\\SairOff.png");

}
// ================================================================================================
private: System::Void Btn_Sair_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	StatusTelaPrincipal = 0;
	this->Visible = false;

}
// ================================================================================================
private: System::Void Btn_Teoria_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	StatusTelaPrincipal = 1;
	this->Visible = false;

}
// ================================================================================================
private: System::Void Btn_Quiz_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	StatusTelaPrincipal = 3;
	this->Visible = false;

}
// ================================================================================================
private: System::Void Btn_CriarAuto_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	StatusTelaPrincipal = 2;
	this->Visible = false;

}
// ================================================================================================
private: System::Void Btn_Ranking_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	StatusTelaPrincipal = 4;
	this->Visible = false;

}
};
}
// ================================================================================================
#endif