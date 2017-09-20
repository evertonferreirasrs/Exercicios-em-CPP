namespace LearnAutomatonV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaPergunta
	/// </summary>
	public ref class TelaPergunta : public System::Windows::Forms::Form
	{
	public:
		TelaPergunta(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			StatusBotao         = -1;
			RespostaEscolhida   = 'x';
			NumeroPerguntaAtual = 0;
			Pontos              = 0;
			
			ListaImg = gcnew array<int^>(10);

			ListaRespostasUsuario = gcnew array<char^>(30);

			for (int k = 0; k < 30; ++k){

				ListaRespostasUsuario[k] = 'x';

			}
		}

		void getVetorDeRespostasUser(char[]);

		int getStatus(void){
			return StatusBotao;
		}

		char getRespostaEscolhida(void) {
			return RespostaEscolhida;
		}

		void carregarImagens();

		void carregarTelaPontuacao();

		void converterVetorParaArray(int[]);

		void setPontuacao(int P){

			Pontos = P;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaPergunta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  PictureBoxQuiz;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		char RespostaEscolhida;
		int StatusBotao;
		int Pontos;
		static int NumeroPerguntaAtual;
		array<int^>^ListaImg;
		array<char^>^ListaRespostasUsuario;

	private: System::Windows::Forms::Button^  Btn_Alt_B;
	private: System::Windows::Forms::Button^  Btn_Alt_C;
	private: System::Windows::Forms::Button^  Btn_Alt_Nao;
	private: System::Windows::Forms::Button^  Btn_Alt_Sim;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::Label^  Lb_Pontuacao;

			 
	private: System::Windows::Forms::Button^  Btn_Alt_A;


			 
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaPergunta::typeid));
			this->PictureBoxQuiz = (gcnew System::Windows::Forms::PictureBox());
			this->Btn_Alt_A = (gcnew System::Windows::Forms::Button());
			this->Btn_Alt_B = (gcnew System::Windows::Forms::Button());
			this->Btn_Alt_C = (gcnew System::Windows::Forms::Button());
			this->Btn_Alt_Nao = (gcnew System::Windows::Forms::Button());
			this->Btn_Alt_Sim = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Lb_Pontuacao = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxQuiz))->BeginInit();
			this->SuspendLayout();
			// 
			// PictureBoxQuiz
			// 
			this->PictureBoxQuiz->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBoxQuiz.BackgroundImage")));
			this->PictureBoxQuiz->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBoxQuiz.InitialImage")));
			this->PictureBoxQuiz->Location = System::Drawing::Point(0, 0);
			this->PictureBoxQuiz->Name = L"PictureBoxQuiz";
			this->PictureBoxQuiz->Size = System::Drawing::Size(1200, 700);
			this->PictureBoxQuiz->TabIndex = 0;
			this->PictureBoxQuiz->TabStop = false;
			// 
			// Btn_Alt_A
			// 
			this->Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_A->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Alt_A.BackgroundImage")));
			this->Btn_Alt_A->FlatAppearance->BorderSize = 0;
			this->Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Alt_A->Location = System::Drawing::Point(-909, 626);
			this->Btn_Alt_A->Name = L"Btn_Alt_A";
			this->Btn_Alt_A->Size = System::Drawing::Size(930, 70);
			this->Btn_Alt_A->TabIndex = 2;
			this->Btn_Alt_A->UseVisualStyleBackColor = false;
			this->Btn_Alt_A->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPergunta::Btn_Alt_A_MouseClick);
			// 
			// Btn_Alt_B
			// 
			this->Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_B->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Alt_B.BackgroundImage")));
			this->Btn_Alt_B->FlatAppearance->BorderSize = 0;
			this->Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Alt_B->Location = System::Drawing::Point(-909, 379);
			this->Btn_Alt_B->Name = L"Btn_Alt_B";
			this->Btn_Alt_B->Size = System::Drawing::Size(930, 70);
			this->Btn_Alt_B->TabIndex = 3;
			this->Btn_Alt_B->UseVisualStyleBackColor = false;
			this->Btn_Alt_B->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPergunta::Btn_Alt_B_MouseClick);
			// 
			// Btn_Alt_C
			// 
			this->Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_C->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Alt_C.BackgroundImage")));
			this->Btn_Alt_C->FlatAppearance->BorderSize = 0;
			this->Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Alt_C->Location = System::Drawing::Point(-909, 470);
			this->Btn_Alt_C->Name = L"Btn_Alt_C";
			this->Btn_Alt_C->Size = System::Drawing::Size(930, 70);
			this->Btn_Alt_C->TabIndex = 4;
			this->Btn_Alt_C->UseVisualStyleBackColor = false;
			this->Btn_Alt_C->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPergunta::Btn_Alt_C_MouseClick);
			// 
			// Btn_Alt_Nao
			// 
			this->Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_Nao->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Alt_Nao.BackgroundImage")));
			this->Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
			this->Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Alt_Nao->Location = System::Drawing::Point(-193, 546);
			this->Btn_Alt_Nao->Name = L"Btn_Alt_Nao";
			this->Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
			this->Btn_Alt_Nao->TabIndex = 7;
			this->Btn_Alt_Nao->UseVisualStyleBackColor = false;
			this->Btn_Alt_Nao->Visible = false;
			this->Btn_Alt_Nao->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPergunta::Btn_Alt_Nao_MouseClick);
			// 
			// Btn_Alt_Sim
			// 
			this->Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_Sim->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Alt_Sim.BackgroundImage")));
			this->Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
			this->Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Alt_Sim->Location = System::Drawing::Point(-193, 609);
			this->Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
			this->Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
			this->Btn_Alt_Sim->TabIndex = 8;
			this->Btn_Alt_Sim->UseVisualStyleBackColor = false;
			this->Btn_Alt_Sim->Visible = false;
			this->Btn_Alt_Sim->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPergunta::Btn_Alt_Sim_MouseClick);
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
			this->button1->Location = System::Drawing::Point(99, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 40);
			this->button1->TabIndex = 24;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaPergunta::button1_MouseClick_1);
			// 
			// Lb_Pontuacao
			// 
			this->Lb_Pontuacao->AutoSize = true;
			this->Lb_Pontuacao->BackColor = System::Drawing::Color::Transparent;
			this->Lb_Pontuacao->Location = System::Drawing::Point(-14, 326);
			this->Lb_Pontuacao->Name = L"Lb_Pontuacao";
			this->Lb_Pontuacao->Size = System::Drawing::Size(0, 13);
			this->Lb_Pontuacao->TabIndex = 28;
			this->Lb_Pontuacao->Visible = false;
			// 
			// TelaPergunta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->Lb_Pontuacao);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Btn_Alt_Sim);
			this->Controls->Add(this->Btn_Alt_Nao);
			this->Controls->Add(this->Btn_Alt_C);
			this->Controls->Add(this->Btn_Alt_B);
			this->Controls->Add(this->Btn_Alt_A);
			this->Controls->Add(this->PictureBoxQuiz);
			this->Name = L"TelaPergunta";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaPergunta2";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaPergunta::TelaPergunta2_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxQuiz))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
// ================================================================================================
	private: System::Void button1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				 NumeroPerguntaAtual++;
				
				 if (NumeroPerguntaAtual < 10){

					 carregarImagens();

				 }
				 else{

					 NumeroPerguntaAtual = 0;

				 }
				 
	}
// ================================================================================================
	private: System::Void TelaPergunta2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

				 StatusBotao = 1;
		 
	}
// ================================================================================================
private: System::Void Btn_Alt_A_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	ListaRespostasUsuario[NumeroPerguntaAtual] = 'a';

	NumeroPerguntaAtual++;

	if (NumeroPerguntaAtual < 10){

		carregarImagens();

	}
	else{

		NumeroPerguntaAtual = 0;
		StatusBotao = 1;

		this->Visible = false;
		this->Close();
		
	}
}
// ================================================================================================
private: System::Void Btn_Alt_Sim_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	ListaRespostasUsuario[NumeroPerguntaAtual] = 's';
		
			 NumeroPerguntaAtual++;

			 if (NumeroPerguntaAtual < 10){

				 carregarImagens();

			 }
			 else{

				 NumeroPerguntaAtual = 0;
				 StatusBotao = 1;
				 this->Visible = false;
				 this->Close();
				
			 }
}
// ================================================================================================
private: System::Void Btn_Alt_Nao_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	ListaRespostasUsuario[NumeroPerguntaAtual] = 'n';
		
			 NumeroPerguntaAtual++;

			 if (NumeroPerguntaAtual < 10){

				 carregarImagens();

			 }
			 else{

				 NumeroPerguntaAtual = 0;
				 StatusBotao = 1;
				 this->Visible = false;
				 this->Close();
				 
			 }
}
// ================================================================================================
private: System::Void Btn_Alt_C_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	ListaRespostasUsuario[NumeroPerguntaAtual] = 'c';
	
	NumeroPerguntaAtual++;

	if (NumeroPerguntaAtual < 10){

		carregarImagens();

	}
	else{

		NumeroPerguntaAtual = 0;
		StatusBotao = 1;
		this->Visible = false;
		this->Close();
		
	}
}
// ================================================================================================
private: System::Void Btn_Alt_B_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	ListaRespostasUsuario[NumeroPerguntaAtual] = 'b';
	
	NumeroPerguntaAtual++;

	if (NumeroPerguntaAtual < 10){

		carregarImagens();

	}
	else{

		NumeroPerguntaAtual = 0;
		StatusBotao = 1;
		this->Visible = false;
		this->Close();
	}
}
// ================================================================================================
private: System::Void button1_MouseClick_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 StatusBotao = 0;
			 this->Visible = false;
			 this->Close();

			

			 if (NumeroPerguntaAtual == 0){

				 for (int Index = 0; Index < 11; ++Index){

					 ListaRespostasUsuario[Index] = 'x';

				 }
			 }

			 NumeroPerguntaAtual = 0;


}
};
}
