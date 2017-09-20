namespace LearnAutomatonV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaSobre
	/// </summary>
	public ref class TelaSobre : public System::Windows::Forms::Form
	{
	public:
		TelaSobre(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			StatusTelaSobre = -1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaSobre()
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
	private: System::Windows::Forms::Button^  button1;

		int StatusTelaSobre;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaSobre::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(71, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 40);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaSobre::button1_MouseClick);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &TelaSobre::button1_MouseLeave);
			this->button1->MouseHover += gcnew System::EventHandler(this, &TelaSobre::button1_MouseHover);
			// 
			// TelaSobre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1180, 667);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TelaSobre";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormTelaSobre";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaSobre::FormTelaSobre_FormClosed);
			this->ResumeLayout(false);

		}
// ================================================================================================
#pragma endregion
	private: System::Void FormTelaSobre_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 StatusTelaSobre = 0;
				 this->Visible = false;
				 this->Close();
	}
// ================================================================================================
	private: System::Void button1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
		
		button1->Image = Image::FromFile("..\\Img\\MenuOn.png");
	
	}
// ================================================================================================
	private: System::Void button1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {

		button1->Image = Image::FromFile("..\\Img\\MenuOff.png");

	}
// ================================================================================================
	private: System::Void button1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		StatusTelaSobre = 0;
		this->Visible = false;
		this->Close();
		
	}
	};
}
