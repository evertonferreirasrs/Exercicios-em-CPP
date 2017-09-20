#include <list>
#include <vector>
// ================================================================================================

namespace LearnAutomatonV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaTeoria
	/// </summary>
	public ref class TelaTeoria : public System::Windows::Forms::Form
	{
	public:
		TelaTeoria(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			StatusBotaoTeoria = -1;
		}

		int getStatusTeoria(void){
			return StatusBotaoTeoria;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaTeoria()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	int StatusBotaoTeoria,ind;
			 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  Btn_Anterior;
	private: System::Windows::Forms::Button^  Btn_Voltar_Menu;
	private: System::Windows::Forms::Button^  Btn_Proximo;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaTeoria::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Btn_Proximo = (gcnew System::Windows::Forms::Button());
			this->Btn_Anterior = (gcnew System::Windows::Forms::Button());
			this->Btn_Voltar_Menu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1185, 663);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Btn_Proximo
			// 
			this->Btn_Proximo->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Proximo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Proximo.BackgroundImage")));
			this->Btn_Proximo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Proximo->FlatAppearance->BorderSize = 0;
			this->Btn_Proximo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Proximo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Proximo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Proximo->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Btn_Proximo->Location = System::Drawing::Point(821, 588);
			this->Btn_Proximo->Name = L"Btn_Proximo";
			this->Btn_Proximo->Size = System::Drawing::Size(200, 40);
			this->Btn_Proximo->TabIndex = 1;
			this->Btn_Proximo->UseVisualStyleBackColor = false;
			this->Btn_Proximo->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaTeoria::Btn_Proximo_MouseClick_1);
			this->Btn_Proximo->MouseLeave += gcnew System::EventHandler(this, &TelaTeoria::Btn_Proximo_MouseLeave_1);
			this->Btn_Proximo->MouseHover += gcnew System::EventHandler(this, &TelaTeoria::Btn_Proximo_MouseHover_1);
			// 
			// Btn_Anterior
			// 
			this->Btn_Anterior->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Anterior->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Anterior.BackgroundImage")));
			this->Btn_Anterior->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Anterior->FlatAppearance->BorderSize = 0;
			this->Btn_Anterior->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Anterior->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Anterior->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Anterior->Location = System::Drawing::Point(174, 588);
			this->Btn_Anterior->Name = L"Btn_Anterior";
			this->Btn_Anterior->Size = System::Drawing::Size(200, 40);
			this->Btn_Anterior->TabIndex = 2;
			this->Btn_Anterior->UseVisualStyleBackColor = false;
			this->Btn_Anterior->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaTeoria::Btn_Anterior_MouseClick);
			this->Btn_Anterior->MouseLeave += gcnew System::EventHandler(this, &TelaTeoria::Btn_Anterior_MouseLeave);
			this->Btn_Anterior->MouseHover += gcnew System::EventHandler(this, &TelaTeoria::Btn_Anterior_MouseHover);
			// 
			// Btn_Voltar_Menu
			// 
			this->Btn_Voltar_Menu->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Voltar_Menu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Voltar_Menu.BackgroundImage")));
			this->Btn_Voltar_Menu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Voltar_Menu->FlatAppearance->BorderSize = 0;
			this->Btn_Voltar_Menu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Voltar_Menu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Voltar_Menu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Voltar_Menu->Location = System::Drawing::Point(155, 21);
			this->Btn_Voltar_Menu->Name = L"Btn_Voltar_Menu";
			this->Btn_Voltar_Menu->Size = System::Drawing::Size(200, 40);
			this->Btn_Voltar_Menu->TabIndex = 3;
			this->Btn_Voltar_Menu->UseVisualStyleBackColor = false;
			this->Btn_Voltar_Menu->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaTeoria::Btn_Voltar_Menu_MouseClick);
			// 
			// TelaTeoria
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->Btn_Voltar_Menu);
			this->Controls->Add(this->Btn_Anterior);
			this->Controls->Add(this->Btn_Proximo);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"TelaTeoria";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaTeoria";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
// ================================================================================================
#pragma endregion
private: System::Void Btn_Proximo_MouseClick_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	if (ind < 15){

		ind++;

	}
	
	switch (ind)
	{

	case 0:
		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag1.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 1:
		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag2.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 2:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag3.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 3:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag4.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;
	case 4:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag5.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 5:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag6.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 6:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag7.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 7:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag8.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 8:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag9.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 9:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag10.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 10:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag11.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 11:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag12.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 12:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag13.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 13:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag14.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 14:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag15.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 15:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag16.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	
	default:
		break;
	}
}
// ================================================================================================
private: System::Void Btn_Proximo_MouseHover_1(System::Object^  sender, System::EventArgs^  e) {

	Btn_Proximo->BackgroundImage = Image::FromFile("..\\Img\\Proximo1.png");

}
// ================================================================================================
private: System::Void Btn_Proximo_MouseLeave_1(System::Object^  sender, System::EventArgs^  e) {

	Btn_Proximo->BackgroundImage = Image::FromFile("..\\Img\\Proximo.png");

}
// ================================================================================================
private: System::Void Btn_Anterior_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	if (ind > 0){
		ind--;
	}
	
	switch (ind)
	{

	case 0:
		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag1.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 1:
		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag2.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 2:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag3.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 3:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag4.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;
	case 4:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag5.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 5:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag6.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 6:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag7.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 7:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag8.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 8:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag9.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 9:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag10.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 10:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag11.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 11:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag12.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 12:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag13.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 13:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag14.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 14:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag15.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	case 15:

		pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Teoria\\pag16.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox1->ClientSize = System::Drawing::Size(1200, 700);

		break;

	default:
		break;
	}

}
// ================================================================================================
private: System::Void Btn_Anterior_MouseHover(System::Object^  sender, System::EventArgs^  e) {

	Btn_Anterior->BackgroundImage = Image::FromFile("..\\Img\\Anterior1.png");

}
// ================================================================================================
private: System::Void Btn_Anterior_MouseLeave(System::Object^  sender, System::EventArgs^  e) {

	Btn_Anterior->BackgroundImage = Image::FromFile("..\\Img\\Anterior.png");

}
// ================================================================================================
private: System::Void Btn_Voltar_Menu_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	StatusBotaoTeoria = 0;
	this->Visible = false;

}
};
}
