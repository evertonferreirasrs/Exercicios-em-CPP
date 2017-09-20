#include "TelaPergunta.h"
#include "ControlePerguntas.h"
// ================================================================================================

void LearnAutomatonV1::TelaPergunta::carregarImagens(){

	int Num ;

		Num = (int)ListaImg[NumeroPerguntaAtual];

			switch (Num)
			{
			case 0:
				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Pergunta1.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				
				PictureBoxQuiz->Update();
				PictureBoxQuiz->Refresh();

				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);
				
				Btn_Alt_A->Update();
				Btn_Alt_B->Update();
				Btn_Alt_C->Update();

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

			     Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				 Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Refresh();
				Btn_Alt_Sim->Update();

				break;

			case 1:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta2\\Pergunta2.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Update();
				PictureBoxQuiz->Refresh();

				
				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Update();
				Btn_Alt_Sim->Refresh();
				

				
				break;

			case 2:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta3\\Pergunta3.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);

				PictureBoxQuiz->Update();
				PictureBoxQuiz->Refresh();

				

				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				
				Btn_Alt_Nao->Update();
				Btn_Alt_Nao->Refresh();

				Btn_Alt_Sim->Update();
				Btn_Alt_Sim->Refresh();
				


				break;

			case 3:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta4\\Pergunta4.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Update();
				PictureBoxQuiz->Refresh();

				

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta4\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta4\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();
				
				
				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta4\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();

				break;

			case 4:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta5\\Pergunta5.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Update();
				PictureBoxQuiz->Refresh();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta5\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta5\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta5\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				
							
				
				break;

			case 5:


				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta6\\Pergunta6.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);

				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();


				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Update();
				Btn_Alt_B->Update();
				Btn_Alt_C->Update();

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Refresh();
				Btn_Alt_Sim->Update();

				break;

			case 6:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta7\\Pergunta7.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta7\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta7\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta7\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();

				break;

			case 7:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta8\\Pergunta8.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta8\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta8\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta8\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();

				break;

			case 8:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta9\\Pergunta9.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();


				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Update();
				Btn_Alt_B->Update();
				Btn_Alt_C->Update();

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Refresh();
				Btn_Alt_Sim->Update();
				break;

			case 9:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta10\\Pergunta10.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta10\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta10\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta10\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();

				break;

			case 10:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta11\\Pergunta11.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta11\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta11\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta11\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();

				break;

			case 11:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta12\\Pergunta12.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta12\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta12\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta12\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 12:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta13\\Pergunta13.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();


				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta13\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta13\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta13\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 13:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta14\\Pergunta14.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta14\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta14\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta14\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 14:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta15\\Pergunta15.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta15\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta15\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta15\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 15:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta16\\Pergunta16.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta16\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta16\\b.png"); 
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta16\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 16:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta17\\Pergunta17.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta17\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta17\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta17\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 17:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta18\\Pergunta18.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta18\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta18\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta18\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 18:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta19\\Pergunta19.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta19\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta19\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta19\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 19:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta20\\Pergunta20.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();
				
				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta20\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta20\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta20\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 20:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta21\\Pergunta21.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();


				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Update();
				Btn_Alt_B->Update();
				Btn_Alt_C->Update();

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Refresh();
				Btn_Alt_Sim->Update();

				break;

			case 21:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta22\\Pergunta22.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Update();
				Btn_Alt_B->Update();
				Btn_Alt_C->Update();

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Refresh();
				Btn_Alt_Sim->Update();
				break;

			case 22:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta23\\Pergunta23.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();


				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Update();
				Btn_Alt_B->Update();
				Btn_Alt_C->Update();

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Refresh();
				Btn_Alt_Sim->Update();
				break;

			case 23:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta24\\Pergunta24.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();


				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Update();
				Btn_Alt_B->Update();
				Btn_Alt_C->Update();

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Refresh();
				Btn_Alt_Sim->Update();
				break;

			case 24:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta25\\Pergunta25.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();


				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Update();
				Btn_Alt_B->Update();
				Btn_Alt_C->Update();

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Refresh();
				Btn_Alt_Sim->Update();
				break;

			case 25:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta26\\Pergunta26.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();
				
				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta26\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta26\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta26\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();

				break;

			case 26:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta27\\Pergunta27.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();
				
				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta27\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta27\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta27\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 27:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta28\\Pergunta28.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();
				
				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta28\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta28\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta28\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 28:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta29\\Pergunta29.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();
				
				Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_Sim->Visible = false;
				Btn_Alt_Nao->Visible = false;
				Btn_Alt_Sim->Update();
				Btn_Alt_Nao->Update();
				Btn_Alt_Sim->Refresh();
				Btn_Alt_Nao->Refresh();



				Btn_Alt_A->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta29\\a.png");
				Btn_Alt_A->FlatAppearance->BorderSize = 0;
				Btn_Alt_A->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_A->Location = System::Drawing::Point(135, 368);
				Btn_Alt_A->Name = L"Btn_Alt_A";
				Btn_Alt_A->Size = System::Drawing::Size(930, 70);
				Btn_Alt_A->TabIndex = 0;
				Btn_Alt_A->UseVisualStyleBackColor = false;
				Btn_Alt_A->Visible = true;
				Btn_Alt_A->Update();
				Btn_Alt_A->Refresh();

				Btn_Alt_B->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta29\\b.png");
				Btn_Alt_B->FlatAppearance->BorderSize = 0;
				Btn_Alt_B->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_B->Location = System::Drawing::Point(135, 454);
				Btn_Alt_B->Name = L"Btn_Alt_B";
				Btn_Alt_B->Size = System::Drawing::Size(930, 70);
				Btn_Alt_B->TabIndex = 0;
				Btn_Alt_B->UseVisualStyleBackColor = false;
				Btn_Alt_B->Visible = true;
				Btn_Alt_B->Update();
				Btn_Alt_B->Refresh();


				Btn_Alt_C->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta29\\c.png");
				Btn_Alt_C->FlatAppearance->BorderSize = 0;
				Btn_Alt_C->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_C->Location = System::Drawing::Point(135, 540);
				Btn_Alt_C->Name = L"Btn_Alt_C";
				Btn_Alt_C->Size = System::Drawing::Size(930, 70);
				Btn_Alt_C->TabIndex = 0;
				Btn_Alt_C->UseVisualStyleBackColor = false;
				Btn_Alt_C->Visible = true;
				Btn_Alt_C->Update();
				Btn_Alt_C->Refresh();
				break;

			case 29:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta30\\Pergunta30.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();

				Btn_Alt_A->Visible = false;
				Btn_Alt_B->Visible = false;
				Btn_Alt_C->Visible = false;
				Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
				Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

				Btn_Alt_A->Update();
				Btn_Alt_B->Update();
				Btn_Alt_C->Update();

				Btn_Alt_A->Refresh();
				Btn_Alt_B->Refresh();
				Btn_Alt_C->Refresh();

				Btn_Alt_Sim->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Sim.png");
				Btn_Alt_Sim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Sim->FlatAppearance->BorderSize = 0;
				Btn_Alt_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Sim->Location = System::Drawing::Point(242, 576);
				Btn_Alt_Sim->Name = L"Btn_Alt_Sim";
				Btn_Alt_Sim->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Sim->TabIndex = 5;
				Btn_Alt_Sim->UseVisualStyleBackColor = false;
				Btn_Alt_Sim->Visible = true;

				Btn_Alt_Nao->BackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->BackgroundImage = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta1\\Nao.png");
				Btn_Alt_Nao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				Btn_Alt_Nao->FlatAppearance->BorderSize = 0;
				Btn_Alt_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				Btn_Alt_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				Btn_Alt_Nao->Location = System::Drawing::Point(694, 576);
				Btn_Alt_Nao->Name = L"Btn_Alt_Sim";
				Btn_Alt_Nao->Size = System::Drawing::Size(220, 40);
				Btn_Alt_Nao->TabIndex = 5;
				Btn_Alt_Nao->UseVisualStyleBackColor = false;
				Btn_Alt_Nao->Visible = true;
				Btn_Alt_Nao->Refresh();
				Btn_Alt_Nao->Update();

				Btn_Alt_Sim->Refresh();
				Btn_Alt_Sim->Update();
				break;



			default:

				PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Perguntas\\Pergunta30\\Pergunta30.jpg");
				PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
				PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
				PictureBoxQuiz->Refresh();
				PictureBoxQuiz->Update();
				break;
			}
}

// ================================================================================================
void LearnAutomatonV1::TelaPergunta::converterVetorParaArray(int Vetor[]){

	for (int k = 0; k < 10; ++k){

		ListaImg[k] = Vetor[k];
	}
}

// ================================================================================================
void LearnAutomatonV1::TelaPergunta::getVetorDeRespostasUser(char Retorno[]){

	for (int I = 0; I < 10; I++){

		Retorno[I] = (char) ListaRespostasUsuario[I];
	}
}

// ================================================================================================
void LearnAutomatonV1::TelaPergunta::carregarTelaPontuacao(){

	PictureBoxQuiz->Image = System::Drawing::Image::FromFile("..\\Img\\Pontuacao.jpg");
	PictureBoxQuiz->SizeMode = PictureBoxSizeMode::StretchImage;
	PictureBoxQuiz->ClientSize = System::Drawing::Size(1200, 670);
	PictureBoxQuiz->Refresh();
	PictureBoxQuiz->Update();

	Btn_Alt_A->Visible = false;
	Btn_Alt_B->Visible = false;
	Btn_Alt_C->Visible = false;
	Btn_Alt_A->Location = System::Drawing::Point(1199, 699);
	Btn_Alt_B->Location = System::Drawing::Point(1199, 699);
	Btn_Alt_C->Location = System::Drawing::Point(1199, 699);

	Btn_Alt_A->Update();
	Btn_Alt_B->Update();
	Btn_Alt_C->Update();

	Btn_Alt_A->Refresh();
	Btn_Alt_B->Refresh();
	Btn_Alt_C->Refresh();

	Btn_Alt_Sim->Visible = false;
	Btn_Alt_Nao->Visible = false;
	Btn_Alt_Sim->Location = System::Drawing::Point(1199, 699);
	Btn_Alt_Nao->Location = System::Drawing::Point(1199, 699);

	Btn_Alt_Sim->Update();
	Btn_Alt_Sim->Refresh();

	Btn_Alt_Nao->Update();
	Btn_Alt_Nao->Refresh();

	Lb_Pontuacao->Visible = true;
	Lb_Pontuacao->Location = System::Drawing::Point(586, 470);
	Lb_Pontuacao->Refresh();

}