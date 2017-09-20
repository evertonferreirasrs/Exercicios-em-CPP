#include <string>
#define MAX 5
// ================================================================================================

namespace LearnAutomatonV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAFD
	/// </summary>
	public ref class TelaAFD : public System::Windows::Forms::Form
	{
	public:
		TelaAFD(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			ListaDeSimbolos = gcnew array<char>(10);

			for (int i = 0; i < ListaDeSimbolos->Length; ++i){

				ListaDeSimbolos[i] = '/';

			}

			TxB_Alfabeto->Text = "";
			StatusTela         = -1;
			NumDeEstados       = -1;
			NumEstadosFinais   = -1;
			QtdDeSimbolos      = 0;
			count = -1;
			index = 0;

			EstFinais = gcnew array<int>(MAX);

			for (int x = 0; x < MAX; ++x){

				EstFinais[x] = -1;

			}
		}

		void computar(int[MAX][MAX], int[MAX]);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaAFD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Lb_Alfabeto;

			 int StatusTela;

			 array<char>^ ListaDeSimbolos;

			 array<int>^ EstFinais;


			 int NumDeEstados;

			 int QtdDeSimbolos;

			 int NumEstadosFinais;

			 static int index2;

			 static	int count;
			 static	int index;

	protected:
	private: System::Windows::Forms::TextBox^  TxB_Alfabeto;
	private: System::Windows::Forms::Label^  Lb_NumEstados;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  Lb_NumEstadosFinais;
	private: System::Windows::Forms::TextBox^  TxB_NumEstadosFinais;
	private: System::Windows::Forms::Label^  Lb_EscolhesStdFinais;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  Lb_TabelaTransicao;
	private: System::Windows::Forms::Button^  Btn_Redefinir;
	private: System::Windows::Forms::Button^  Btn_Gerar;
	private: System::Windows::Forms::TextBox^  TxB_PalavraDigitada;
	private: System::Windows::Forms::Label^  Lb_Palavra;
	private: System::Windows::Forms::TextBox^  TxB_Status;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  Lb_q0;
	private: System::Windows::Forms::Label^  Lb_q1;
	private: System::Windows::Forms::Label^  Lb_q2;
	private: System::Windows::Forms::Label^  Lb_q3;
	private: System::Windows::Forms::Label^  Lb_q4;
	private: System::Windows::Forms::Label^  label1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaAFD::typeid));
			this->Lb_Alfabeto = (gcnew System::Windows::Forms::Label());
			this->TxB_Alfabeto = (gcnew System::Windows::Forms::TextBox());
			this->Lb_NumEstados = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Lb_NumEstadosFinais = (gcnew System::Windows::Forms::Label());
			this->TxB_NumEstadosFinais = (gcnew System::Windows::Forms::TextBox());
			this->Lb_EscolhesStdFinais = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->Lb_TabelaTransicao = (gcnew System::Windows::Forms::Label());
			this->Btn_Redefinir = (gcnew System::Windows::Forms::Button());
			this->Btn_Gerar = (gcnew System::Windows::Forms::Button());
			this->TxB_PalavraDigitada = (gcnew System::Windows::Forms::TextBox());
			this->Lb_Palavra = (gcnew System::Windows::Forms::Label());
			this->TxB_Status = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Lb_q0 = (gcnew System::Windows::Forms::Label());
			this->Lb_q1 = (gcnew System::Windows::Forms::Label());
			this->Lb_q2 = (gcnew System::Windows::Forms::Label());
			this->Lb_q3 = (gcnew System::Windows::Forms::Label());
			this->Lb_q4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Lb_Alfabeto
			// 
			this->Lb_Alfabeto->AutoSize = true;
			this->Lb_Alfabeto->BackColor = System::Drawing::Color::Transparent;
			this->Lb_Alfabeto->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_Alfabeto->Location = System::Drawing::Point(201, 86);
			this->Lb_Alfabeto->Name = L"Lb_Alfabeto";
			this->Lb_Alfabeto->Size = System::Drawing::Size(137, 42);
			this->Lb_Alfabeto->TabIndex = 4;
			this->Lb_Alfabeto->Text = L"Alfabeto";
			// 
			// TxB_Alfabeto
			// 
			this->TxB_Alfabeto->Location = System::Drawing::Point(220, 131);
			this->TxB_Alfabeto->Name = L"TxB_Alfabeto";
			this->TxB_Alfabeto->Size = System::Drawing::Size(103, 20);
			this->TxB_Alfabeto->TabIndex = 5;
			this->TxB_Alfabeto->Enter += gcnew System::EventHandler(this, &TelaAFD::TxB_Alfabeto_Enter);
			this->TxB_Alfabeto->Leave += gcnew System::EventHandler(this, &TelaAFD::TxB_Alfabeto_Leave);
			// 
			// Lb_NumEstados
			// 
			this->Lb_NumEstados->AutoSize = true;
			this->Lb_NumEstados->BackColor = System::Drawing::Color::Transparent;
			this->Lb_NumEstados->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_NumEstados->Location = System::Drawing::Point(159, 178);
			this->Lb_NumEstados->Name = L"Lb_NumEstados";
			this->Lb_NumEstados->Size = System::Drawing::Size(276, 42);
			this->Lb_NumEstados->TabIndex = 6;
			this->Lb_NumEstados->Text = L"Número de Estados";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(277, 232);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(46, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Leave += gcnew System::EventHandler(this, &TelaAFD::textBox1_Leave);
			// 
			// Lb_NumEstadosFinais
			// 
			this->Lb_NumEstadosFinais->AutoSize = true;
			this->Lb_NumEstadosFinais->BackColor = System::Drawing::Color::Transparent;
			this->Lb_NumEstadosFinais->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_NumEstadosFinais->Location = System::Drawing::Point(117, 283);
			this->Lb_NumEstadosFinais->Name = L"Lb_NumEstadosFinais";
			this->Lb_NumEstadosFinais->Size = System::Drawing::Size(362, 42);
			this->Lb_NumEstadosFinais->TabIndex = 8;
			this->Lb_NumEstadosFinais->Text = L"Número de Estados Finais";
			// 
			// TxB_NumEstadosFinais
			// 
			this->TxB_NumEstadosFinais->Location = System::Drawing::Point(277, 341);
			this->TxB_NumEstadosFinais->Name = L"TxB_NumEstadosFinais";
			this->TxB_NumEstadosFinais->Size = System::Drawing::Size(46, 20);
			this->TxB_NumEstadosFinais->TabIndex = 9;
			this->TxB_NumEstadosFinais->Leave += gcnew System::EventHandler(this, &TelaAFD::TxB_NumEstadosFinais_Leave);
			// 
			// Lb_EscolhesStdFinais
			// 
			this->Lb_EscolhesStdFinais->AutoSize = true;
			this->Lb_EscolhesStdFinais->BackColor = System::Drawing::Color::Transparent;
			this->Lb_EscolhesStdFinais->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_EscolhesStdFinais->Location = System::Drawing::Point(117, 401);
			this->Lb_EscolhesStdFinais->Name = L"Lb_EscolhesStdFinais";
			this->Lb_EscolhesStdFinais->Size = System::Drawing::Size(367, 42);
			this->Lb_EscolhesStdFinais->TabIndex = 10;
			this->Lb_EscolhesStdFinais->Text = L"Escolha os Estados Finais";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(224, 446);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(156, 144);
			this->checkedListBox1->TabIndex = 11;
			this->checkedListBox1->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &TelaAFD::checkedListBox1_ItemCheck);
			// 
			// Lb_TabelaTransicao
			// 
			this->Lb_TabelaTransicao->AutoSize = true;
			this->Lb_TabelaTransicao->BackColor = System::Drawing::Color::Transparent;
			this->Lb_TabelaTransicao->Font = (gcnew System::Drawing::Font(L"Papyrus", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_TabelaTransicao->Location = System::Drawing::Point(597, 102);
			this->Lb_TabelaTransicao->Name = L"Lb_TabelaTransicao";
			this->Lb_TabelaTransicao->Size = System::Drawing::Size(419, 64);
			this->Lb_TabelaTransicao->TabIndex = 15;
			this->Lb_TabelaTransicao->Text = L"Tabela de Transição";
			// 
			// Btn_Redefinir
			// 
			this->Btn_Redefinir->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Redefinir->Location = System::Drawing::Point(635, 543);
			this->Btn_Redefinir->Name = L"Btn_Redefinir";
			this->Btn_Redefinir->Size = System::Drawing::Size(344, 39);
			this->Btn_Redefinir->TabIndex = 16;
			this->Btn_Redefinir->Text = L"Limpar Todos os Campos";
			this->Btn_Redefinir->UseVisualStyleBackColor = true;
			this->Btn_Redefinir->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaAFD::Btn_Redefinir_MouseClick);
			// 
			// Btn_Gerar
			// 
			this->Btn_Gerar->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Gerar->Location = System::Drawing::Point(770, 437);
			this->Btn_Gerar->Name = L"Btn_Gerar";
			this->Btn_Gerar->Size = System::Drawing::Size(83, 44);
			this->Btn_Gerar->TabIndex = 17;
			this->Btn_Gerar->Text = L"Gerar";
			this->Btn_Gerar->UseVisualStyleBackColor = true;
			this->Btn_Gerar->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaAFD::Btn_Gerar_MouseClick);
			// 
			// TxB_PalavraDigitada
			// 
			this->TxB_PalavraDigitada->Location = System::Drawing::Point(599, 461);
			this->TxB_PalavraDigitada->Name = L"TxB_PalavraDigitada";
			this->TxB_PalavraDigitada->Size = System::Drawing::Size(114, 20);
			this->TxB_PalavraDigitada->TabIndex = 18;
			// 
			// Lb_Palavra
			// 
			this->Lb_Palavra->AutoSize = true;
			this->Lb_Palavra->BackColor = System::Drawing::Color::Transparent;
			this->Lb_Palavra->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_Palavra->Location = System::Drawing::Point(602, 401);
			this->Lb_Palavra->Name = L"Lb_Palavra";
			this->Lb_Palavra->Size = System::Drawing::Size(111, 42);
			this->Lb_Palavra->TabIndex = 19;
			this->Lb_Palavra->Text = L"Palavra";
			// 
			// TxB_Status
			// 
			this->TxB_Status->Location = System::Drawing::Point(902, 461);
			this->TxB_Status->Name = L"TxB_Status";
			this->TxB_Status->Size = System::Drawing::Size(122, 20);
			this->TxB_Status->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(895, 401);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 42);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Status";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(663, 202);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(295, 137);
			this->dataGridView1->TabIndex = 22;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"";
			this->Column2->Name = L"Column2";
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"";
			this->Column3->Name = L"Column3";
			this->Column3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"";
			this->Column4->Name = L"Column4";
			this->Column4->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"";
			this->Column5->Name = L"Column5";
			this->Column5->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Column5->Width = 50;
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
			this->button1->Location = System::Drawing::Point(92, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 40);
			this->button1->TabIndex = 23;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaAFD::button1_MouseClick);
			// 
			// Lb_q0
			// 
			this->Lb_q0->AutoSize = true;
			this->Lb_q0->BackColor = System::Drawing::Color::Transparent;
			this->Lb_q0->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_q0->Location = System::Drawing::Point(629, 219);
			this->Lb_q0->Name = L"Lb_q0";
			this->Lb_q0->Size = System::Drawing::Size(32, 25);
			this->Lb_q0->TabIndex = 24;
			this->Lb_q0->Text = L"q0";
			// 
			// Lb_q1
			// 
			this->Lb_q1->AutoSize = true;
			this->Lb_q1->BackColor = System::Drawing::Color::Transparent;
			this->Lb_q1->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_q1->Location = System::Drawing::Point(629, 244);
			this->Lb_q1->Name = L"Lb_q1";
			this->Lb_q1->Size = System::Drawing::Size(32, 25);
			this->Lb_q1->TabIndex = 25;
			this->Lb_q1->Text = L"q1";
			// 
			// Lb_q2
			// 
			this->Lb_q2->AutoSize = true;
			this->Lb_q2->BackColor = System::Drawing::Color::Transparent;
			this->Lb_q2->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_q2->Location = System::Drawing::Point(630, 267);
			this->Lb_q2->Name = L"Lb_q2";
			this->Lb_q2->Size = System::Drawing::Size(32, 25);
			this->Lb_q2->TabIndex = 26;
			this->Lb_q2->Text = L"q2";
			// 
			// Lb_q3
			// 
			this->Lb_q3->AutoSize = true;
			this->Lb_q3->BackColor = System::Drawing::Color::Transparent;
			this->Lb_q3->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_q3->Location = System::Drawing::Point(630, 290);
			this->Lb_q3->Name = L"Lb_q3";
			this->Lb_q3->Size = System::Drawing::Size(32, 25);
			this->Lb_q3->TabIndex = 27;
			this->Lb_q3->Text = L"q3";
			// 
			// Lb_q4
			// 
			this->Lb_q4->AutoSize = true;
			this->Lb_q4->BackColor = System::Drawing::Color::Transparent;
			this->Lb_q4->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_q4->Location = System::Drawing::Point(630, 314);
			this->Lb_q4->Name = L"Lb_q4";
			this->Lb_q4->Size = System::Drawing::Size(32, 25);
			this->Lb_q4->TabIndex = 28;
			this->Lb_q4->Text = L"q4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(329, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 18);
			this->label1->TabIndex = 29;
			this->label1->Text = L"(Separe com VÍRGULA)";
			// 
			// TelaAFD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1184, 662);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lb_q4);
			this->Controls->Add(this->Lb_q3);
			this->Controls->Add(this->Lb_q2);
			this->Controls->Add(this->Lb_q1);
			this->Controls->Add(this->Lb_q0);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TxB_Status);
			this->Controls->Add(this->Lb_Palavra);
			this->Controls->Add(this->TxB_PalavraDigitada);
			this->Controls->Add(this->Btn_Gerar);
			this->Controls->Add(this->Btn_Redefinir);
			this->Controls->Add(this->Lb_TabelaTransicao);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->Lb_EscolhesStdFinais);
			this->Controls->Add(this->TxB_NumEstadosFinais);
			this->Controls->Add(this->Lb_NumEstadosFinais);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Lb_NumEstados);
			this->Controls->Add(this->TxB_Alfabeto);
			this->Controls->Add(this->Lb_Alfabeto);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TelaAFD";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormTabela";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaAFD::FormTabela_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
// ================================================================================================
#pragma endregion
	private: System::Void TxB_Alfabeto_Enter(System::Object^  sender, System::EventArgs^  e) {

				 TxB_Alfabeto->Clear();
	}
// ================================================================================================
private: System::Void TxB_Alfabeto_Leave(System::Object^  sender, System::EventArgs^  e) {

			 int index2;

			 index2 = 0;
			 String^ str = Convert::ToString(TxB_Alfabeto->Text);

			 for (int index1 = 0; index1 < str->Length; ++index1){

				 if (str[index1] != ','){

					 ListaDeSimbolos[index2] = (char)str[index1];

					 dataGridView1->Columns[index2]->HeaderText = Convert::ToString(str[index1]);

					 index2++;

				 }

			 }

			 for (int x = 0; ListaDeSimbolos[x] != '/'; ++x){

				 QtdDeSimbolos++;
			 }

}
// ================================================================================================
private: System::Void textBox1_Leave(System::Object^  sender, System::EventArgs^  e) {

			 NumDeEstados = Convert::ToInt32(textBox1->Text);

			 for (int x = 0; x < NumDeEstados; ++x){

				 dataGridView1->Rows->Add();
				
			 }
}
// ================================================================================================
private: System::Void TxB_NumEstadosFinais_Leave(System::Object^  sender, System::EventArgs^  e) {

			 NumEstadosFinais = Convert::ToInt32(TxB_NumEstadosFinais->Text);

			 for (int x = 0; x < NumDeEstados; ++x){

				 checkedListBox1->Items->Add("q" + x);

			 }
}
// ================================================================================================
private: System::Void Btn_Gerar_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 int TabelaTransicao[MAX][MAX];
			 int EstadosFinais[MAX];

			 for (int x = 0; x < MAX; ++x){
				 for (int y = 0; y < MAX; ++y){

					 TabelaTransicao[x][y] = -1;

				 }

				 EstadosFinais[x] = -1;
			 }

			 for (int Lin = 0; Lin < NumDeEstados; ++Lin){

				 for (int Col = 0; Col < QtdDeSimbolos; Col++){


					 TabelaTransicao[Lin][Col] = Convert::ToInt32(dataGridView1->Rows[Lin]->Cells[Col]->Value);

				 }
			 }

			 this->computar(TabelaTransicao, EstadosFinais);

}
// ================================================================================================
private: System::Void checkedListBox1_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {

			 bool isCheck = Convert::ToBoolean(e->CurrentValue);

			 
			
			 if (!isCheck){

				 index = e->Index;
				
				 EstFinais[index2] = index;
				 index2++;

			 }
			 else{
				 count--;
			 };
}
// ================================================================================================
private: System::Void FormTabela_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

			 this->Visible = false;
			 StatusTela = 0;
			 this->Close();
}
// ================================================================================================
private: System::Void button1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 this->Visible = false;
			 StatusTela = 0;
			 this->Close();

}
// ================================================================================================
private: System::Void Btn_Redefinir_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 checkedListBox1->Items->Clear();

			 checkedListBox1->Refresh();


			 TxB_Alfabeto->Clear();
			 TxB_Alfabeto->Refresh();

			 TxB_NumEstadosFinais->Clear();
			 TxB_NumEstadosFinais->Refresh();

			 textBox1->Clear();
			 textBox1->Refresh();

			 TxB_Status->Clear();
			 TxB_Status->Refresh();


			 TxB_PalavraDigitada->Clear();
			 TxB_PalavraDigitada->Refresh();

			 dataGridView1->Rows->Clear();
			 dataGridView1->Columns[0]->HeaderText = "";
			 dataGridView1->Columns[1]->HeaderText = "";
			 dataGridView1->Columns[2]->HeaderText = "";
			 dataGridView1->Columns[3]->HeaderText = "";
			 dataGridView1->Columns[4]->HeaderText = "";
			 dataGridView1->Refresh();

			 index2 = 0;
			 count = -1;
			 index = 0;

			 NumDeEstados = -1;
			 NumEstadosFinais = -1;
			 QtdDeSimbolos = 0;

			 for (int x = 0; x < MAX; ++x){

				 EstFinais[x] = -1;

			 }

			 for (int i = 0; i < 10; ++i){

				 ListaDeSimbolos[i] = '/';

			 }


}
};
}
