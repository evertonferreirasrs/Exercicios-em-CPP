#include <vector>
#include "Jogador.h"
#include <algorithm>
#include <msclr\marshal.h>
// ================================================================================================

namespace LearnAutomatonV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for TelaRanking
	/// </summary>
	public ref class TelaRanking : public System::Windows::Forms::Form
	{
	public:
		TelaRanking(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Status = -1;
			
			
			
		}

		int getStatus(void){

			return Status;
		}


		void setList(vector<Jogador>);

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaRanking()
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
	private: System::Windows::Forms::DataGridView^  TabelaRanking;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Pontuacao;

		int Status;
		
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaRanking::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TabelaRanking = (gcnew System::Windows::Forms::DataGridView());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pontuacao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TabelaRanking))->BeginInit();
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
			this->button1->Location = System::Drawing::Point(489, 557);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 40);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaRanking::button1_MouseClick);
			// 
			// TabelaRanking
			// 
			this->TabelaRanking->AllowUserToAddRows = false;
			this->TabelaRanking->AllowUserToDeleteRows = false;
			this->TabelaRanking->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TabelaRanking->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Nome, this->Pontuacao });
			this->TabelaRanking->Location = System::Drawing::Point(435, 248);
			this->TabelaRanking->Name = L"TabelaRanking";
			this->TabelaRanking->ReadOnly = true;
			this->TabelaRanking->Size = System::Drawing::Size(324, 251);
			this->TabelaRanking->TabIndex = 2;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Nome";
			this->Nome->Name = L"Nome";
			this->Nome->ReadOnly = true;
			this->Nome->Width = 200;
			// 
			// Pontuacao
			// 
			this->Pontuacao->HeaderText = L"Pontuação";
			this->Pontuacao->Name = L"Pontuacao";
			this->Pontuacao->ReadOnly = true;
			this->Pontuacao->Width = 80;
			// 
			// TelaRanking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1184, 662);
			this->Controls->Add(this->TabelaRanking);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TelaRanking";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormRanking";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaRanking::FormRanking_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TabelaRanking))->EndInit();
			this->ResumeLayout(false);

		}
// ================================================================================================
	private: System::Void FormRanking_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

				 Status = -1;
				 this->Visible = false;
				 this->Close();
				 TabelaRanking->Rows->Clear();
				 TabelaRanking->Refresh();

	}
// ================================================================================================
	private: System::Void button1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				 Status = -1;
				 this->Visible = false;
				 this->Close();

				 TabelaRanking->Rows->Clear();
				 TabelaRanking->Refresh();
				 

	}
	};
}
