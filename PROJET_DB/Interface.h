#pragma once
#include "Authentify.h"
#include <stdlib.h>

namespace PROJETDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Description résumée de Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(void)
		{
			InitializeComponent();
			boxCringe->Hide();
			

			//
			//TODO: ajoutez ici le code du constructeur
			//

		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnClient;
	private: System::Windows::Forms::Button^ btnStatistiques;
	private: System::Windows::Forms::Button^ btnStock;
	private: System::Windows::Forms::Button^ btnPersonnel;
	private: System::Windows::Forms::Button^ btnCommande;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnApropos;
	private: System::Windows::Forms::Button^ btnParametres;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabClient;
	private: System::Windows::Forms::TabPage^ tabCommande;
	private: System::Windows::Forms::TabPage^ tabPersonnel;
	private: System::Windows::Forms::TabPage^ tabStock;
	private: System::Windows::Forms::TabPage^ tabStatistique;
	private: System::Windows::Forms::Panel^ pnlSwitch;
	private: System::Windows::Forms::TabPage^ tabApropos;
	private: System::Windows::Forms::TabPage^ tabParametres;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnPlusInformation;
	private: System::Windows::Forms::RadioButton^ ModeSombre;
	private: System::Windows::Forms::RadioButton^ ModeClair;
	private: System::Windows::Forms::RadioButton^ ModeCringe;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ btnClientAfficher;
	private: System::Windows::Forms::RadioButton^ btnClientSupprimer;
	private: System::Windows::Forms::RadioButton^ btnClientModifier;
	private: System::Windows::Forms::RadioButton^ btnClientCréer;
	private: System::Windows::Forms::TextBox^ boxIDClient;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ boxNom;
	private: System::Windows::Forms::TextBox^ boxPrenom;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DateTimePicker^ datePremierAchat;
	private: System::Windows::Forms::DateTimePicker^ dateNaissance;
	private: System::Windows::Forms::Panel^ pnlDatabase;
	private: System::Windows::Forms::Button^ btnExecuter;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ProgressBar^ progressBarCommande;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnExecuterCommande;
	private: System::Windows::Forms::DateTimePicker^ dateLivraison;
	private: System::Windows::Forms::DateTimePicker^ dateEnvoie;
	private: System::Windows::Forms::TextBox^ boxRefCommande;
	private: System::Windows::Forms::TextBox^ boxIDCommande;
	private: System::Windows::Forms::RadioButton^ btnCommandeAfficher;
	private: System::Windows::Forms::RadioButton^ btnCommandeSupprimer;
	private: System::Windows::Forms::RadioButton^ btnCommandeModifier;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ btnCommandeCréer;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textDatabase;
	private: System::Windows::Forms::Label^ labelDatabase;
	private: System::Windows::Forms::Button^ btnSeConnecter;
	private: System::Windows::Forms::ProgressBar^ progressBarBDD;
	private: System::Windows::Forms::Label^ labelBDD;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ProgressBar^ progressBarPersonnel;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ btnExecuterPersonnel;
	private: System::Windows::Forms::TextBox^ boxNomPersonnel;
	private: System::Windows::Forms::TextBox^ BoxPrenomPersonnel;
	private: System::Windows::Forms::TextBox^ boxIDPersonnel;
	private: System::Windows::Forms::RadioButton^ btnAfficherPersonnel;
	private: System::Windows::Forms::RadioButton^ btnSupprimerPersonnel;
	private: System::Windows::Forms::RadioButton^ btnModifierPersonnel;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ btnCréerPersonnel;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ labelTable;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::ProgressBar^ progressBarStock;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Button^ btnExecuterStock;
	private: System::Windows::Forms::TextBox^ boxTVA;
	private: System::Windows::Forms::TextBox^ boxArticle;
	private: System::Windows::Forms::TextBox^ boxIDStock;
	private: System::Windows::Forms::RadioButton^ btnAfficherStock;
	private: System::Windows::Forms::RadioButton^ btnSupprimerStock;
	private: System::Windows::Forms::RadioButton^ btnModifierStock;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ btnCreerStock;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ boxReaprov;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::DataGridView^ dataGridViewClient;
	private: System::Windows::Forms::DataGridView^ dataGridViewCommande;
	private: System::Windows::Forms::DataGridView^ dataGridViewPersonnel;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::ProgressBar^ progressBarStat;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::DataGridView^ dataGridViewStat;
	private: System::Windows::Forms::Button^ btnExecuterStat;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ boxIDStat;
	private: System::Windows::Forms::RadioButton^ btnAfficherStat;
	private: System::Windows::Forms::RadioButton^ btnSupprimerStat;
	private: System::Windows::Forms::RadioButton^ btnModifierStat;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::RadioButton^ btnCreerStat;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::DataGridView^ dataGridViewStock;
	private: System::Windows::Forms::PictureBox^ boxCringe;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::TextBox^ boxAdressFacturation;

private: System::Windows::Forms::TextBox^ boxAdressLivraison;

private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Interface::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->boxCringe = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnParametres = (gcnew System::Windows::Forms::Button());
			this->btnApropos = (gcnew System::Windows::Forms::Button());
			this->btnStatistiques = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnStock = (gcnew System::Windows::Forms::Button());
			this->btnPersonnel = (gcnew System::Windows::Forms::Button());
			this->btnCommande = (gcnew System::Windows::Forms::Button());
			this->btnClient = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->pnlDatabase = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->btnExecuter = (gcnew System::Windows::Forms::Button());
			this->datePremierAchat = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->boxAdressFacturation = (gcnew System::Windows::Forms::TextBox());
			this->boxAdressLivraison = (gcnew System::Windows::Forms::TextBox());
			this->boxNom = (gcnew System::Windows::Forms::TextBox());
			this->boxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->boxIDClient = (gcnew System::Windows::Forms::TextBox());
			this->btnClientAfficher = (gcnew System::Windows::Forms::RadioButton());
			this->btnClientSupprimer = (gcnew System::Windows::Forms::RadioButton());
			this->btnClientModifier = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->btnClientCréer = (gcnew System::Windows::Forms::RadioButton());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabCommande = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->progressBarCommande = (gcnew System::Windows::Forms::ProgressBar());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewCommande = (gcnew System::Windows::Forms::DataGridView());
			this->btnExecuterCommande = (gcnew System::Windows::Forms::Button());
			this->dateLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateEnvoie = (gcnew System::Windows::Forms::DateTimePicker());
			this->boxRefCommande = (gcnew System::Windows::Forms::TextBox());
			this->boxIDCommande = (gcnew System::Windows::Forms::TextBox());
			this->btnCommandeAfficher = (gcnew System::Windows::Forms::RadioButton());
			this->btnCommandeSupprimer = (gcnew System::Windows::Forms::RadioButton());
			this->btnCommandeModifier = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->btnCommandeCréer = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tabPersonnel = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->progressBarPersonnel = (gcnew System::Windows::Forms::ProgressBar());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewPersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->btnExecuterPersonnel = (gcnew System::Windows::Forms::Button());
			this->boxNomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->BoxPrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->boxIDPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->btnAfficherPersonnel = (gcnew System::Windows::Forms::RadioButton());
			this->btnSupprimerPersonnel = (gcnew System::Windows::Forms::RadioButton());
			this->btnModifierPersonnel = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->btnCréerPersonnel = (gcnew System::Windows::Forms::RadioButton());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->tabStock = (gcnew System::Windows::Forms::TabPage());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->progressBarStock = (gcnew System::Windows::Forms::ProgressBar());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewStock = (gcnew System::Windows::Forms::DataGridView());
			this->btnExecuterStock = (gcnew System::Windows::Forms::Button());
			this->boxReaprov = (gcnew System::Windows::Forms::TextBox());
			this->boxTVA = (gcnew System::Windows::Forms::TextBox());
			this->boxArticle = (gcnew System::Windows::Forms::TextBox());
			this->boxIDStock = (gcnew System::Windows::Forms::TextBox());
			this->btnAfficherStock = (gcnew System::Windows::Forms::RadioButton());
			this->btnSupprimerStock = (gcnew System::Windows::Forms::RadioButton());
			this->btnModifierStock = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->btnCreerStock = (gcnew System::Windows::Forms::RadioButton());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->tabStatistique = (gcnew System::Windows::Forms::TabPage());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->progressBarStat = (gcnew System::Windows::Forms::ProgressBar());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewStat = (gcnew System::Windows::Forms::DataGridView());
			this->btnExecuterStat = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->boxIDStat = (gcnew System::Windows::Forms::TextBox());
			this->btnAfficherStat = (gcnew System::Windows::Forms::RadioButton());
			this->btnSupprimerStat = (gcnew System::Windows::Forms::RadioButton());
			this->btnModifierStat = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->btnCreerStat = (gcnew System::Windows::Forms::RadioButton());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->tabApropos = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnPlusInformation = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabParametres = (gcnew System::Windows::Forms::TabPage());
			this->labelBDD = (gcnew System::Windows::Forms::Label());
			this->progressBarBDD = (gcnew System::Windows::Forms::ProgressBar());
			this->btnSeConnecter = (gcnew System::Windows::Forms::Button());
			this->textDatabase = (gcnew System::Windows::Forms::TextBox());
			this->labelDatabase = (gcnew System::Windows::Forms::Label());
			this->ModeCringe = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ModeSombre = (gcnew System::Windows::Forms::RadioButton());
			this->ModeClair = (gcnew System::Windows::Forms::RadioButton());
			this->pnlSwitch = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->labelTable = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxCringe))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabClient->SuspendLayout();
			this->pnlDatabase->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
			this->tabCommande->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->BeginInit();
			this->tabPersonnel->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->BeginInit();
			this->tabStock->SuspendLayout();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->BeginInit();
			this->tabStatistique->SuspendLayout();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStat))->BeginInit();
			this->tabApropos->SuspendLayout();
			this->tabParametres->SuspendLayout();
			this->pnlSwitch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Wheat;
			this->panel1->Controls->Add(this->boxCringe);
			this->panel1->Controls->Add(this->panel14);
			this->panel1->Controls->Add(this->panel15);
			this->panel1->Controls->Add(this->panel13);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->btnParametres);
			this->panel1->Controls->Add(this->btnApropos);
			this->panel1->Controls->Add(this->btnStatistiques);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->btnStock);
			this->panel1->Controls->Add(this->btnPersonnel);
			this->panel1->Controls->Add(this->btnCommande);
			this->panel1->Controls->Add(this->btnClient);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Location = System::Drawing::Point(-2, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(226, 697);
			this->panel1->TabIndex = 1;
			// 
			// boxCringe
			// 
			this->boxCringe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boxCringe.Image")));
			this->boxCringe->Location = System::Drawing::Point(0, 298);
			this->boxCringe->Name = L"boxCringe";
			this->boxCringe->Size = System::Drawing::Size(226, 251);
			this->boxCringe->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->boxCringe->TabIndex = 11;
			this->boxCringe->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Tan;
			this->panel14->Location = System::Drawing::Point(3, 298);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(250, 2);
			this->panel14->TabIndex = 10;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Tan;
			this->panel15->Location = System::Drawing::Point(3, 547);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(250, 2);
			this->panel15->TabIndex = 10;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Tan;
			this->panel13->Location = System::Drawing::Point(3, 653);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(250, 2);
			this->panel13->TabIndex = 10;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Tan;
			this->panel11->Location = System::Drawing::Point(3, 600);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(250, 2);
			this->panel11->TabIndex = 10;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Tan;
			this->panel10->Location = System::Drawing::Point(3, 251);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(250, 2);
			this->panel10->TabIndex = 10;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Tan;
			this->panel9->Location = System::Drawing::Point(3, 202);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(250, 2);
			this->panel9->TabIndex = 10;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Tan;
			this->panel8->Location = System::Drawing::Point(3, 101);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(250, 2);
			this->panel8->TabIndex = 10;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Tan;
			this->panel7->Location = System::Drawing::Point(3, 151);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(250, 2);
			this->panel7->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 664);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Waffle Manager© v1.0.1A CESI Corp. 2021";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Tan;
			this->panel3->Location = System::Drawing::Point(0, 686);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(230, 10);
			this->panel3->TabIndex = 4;
			// 
			// btnParametres
			// 
			this->btnParametres->BackColor = System::Drawing::Color::Transparent;
			this->btnParametres->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnParametres->FlatAppearance->BorderSize = 0;
			this->btnParametres->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Wheat;
			this->btnParametres->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Tan;
			this->btnParametres->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnParametres->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnParametres->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnParametres->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnParametres.Image")));
			this->btnParametres->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnParametres->Location = System::Drawing::Point(0, 600);
			this->btnParametres->Name = L"btnParametres";
			this->btnParametres->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnParametres->Size = System::Drawing::Size(228, 55);
			this->btnParametres->TabIndex = 7;
			this->btnParametres->Text = L"    Paramètres";
			this->btnParametres->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnParametres->UseVisualStyleBackColor = false;
			this->btnParametres->Click += gcnew System::EventHandler(this, &Interface::btnParametres_Click);
			// 
			// btnApropos
			// 
			this->btnApropos->BackColor = System::Drawing::Color::Transparent;
			this->btnApropos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnApropos->FlatAppearance->BorderSize = 0;
			this->btnApropos->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Wheat;
			this->btnApropos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Tan;
			this->btnApropos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnApropos->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnApropos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnApropos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnApropos.Image")));
			this->btnApropos->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnApropos->Location = System::Drawing::Point(0, 547);
			this->btnApropos->Name = L"btnApropos";
			this->btnApropos->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnApropos->Size = System::Drawing::Size(226, 55);
			this->btnApropos->TabIndex = 5;
			this->btnApropos->Text = L"    A propos";
			this->btnApropos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnApropos->UseVisualStyleBackColor = false;
			this->btnApropos->Click += gcnew System::EventHandler(this, &Interface::btnApropos_Click);
			// 
			// btnStatistiques
			// 
			this->btnStatistiques->BackColor = System::Drawing::Color::Transparent;
			this->btnStatistiques->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStatistiques->FlatAppearance->BorderSize = 0;
			this->btnStatistiques->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Wheat;
			this->btnStatistiques->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Tan;
			this->btnStatistiques->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStatistiques->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStatistiques->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnStatistiques->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStatistiques.Image")));
			this->btnStatistiques->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStatistiques->Location = System::Drawing::Point(0, 251);
			this->btnStatistiques->Name = L"btnStatistiques";
			this->btnStatistiques->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnStatistiques->Size = System::Drawing::Size(226, 49);
			this->btnStatistiques->TabIndex = 0;
			this->btnStatistiques->Text = L"    Statistique";
			this->btnStatistiques->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStatistiques->UseVisualStyleBackColor = false;
			this->btnStatistiques->Click += gcnew System::EventHandler(this, &Interface::btnStatistique_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(230, 56);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(220, 33);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnStock
			// 
			this->btnStock->BackColor = System::Drawing::Color::Transparent;
			this->btnStock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStock->FlatAppearance->BorderSize = 0;
			this->btnStock->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Wheat;
			this->btnStock->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Tan;
			this->btnStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStock->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnStock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStock.Image")));
			this->btnStock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStock->Location = System::Drawing::Point(0, 202);
			this->btnStock->Name = L"btnStock";
			this->btnStock->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnStock->Size = System::Drawing::Size(226, 51);
			this->btnStock->TabIndex = 0;
			this->btnStock->Text = L"    Stock";
			this->btnStock->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStock->UseVisualStyleBackColor = false;
			this->btnStock->Click += gcnew System::EventHandler(this, &Interface::btnStock_Click);
			// 
			// btnPersonnel
			// 
			this->btnPersonnel->BackColor = System::Drawing::Color::Transparent;
			this->btnPersonnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPersonnel->FlatAppearance->BorderSize = 0;
			this->btnPersonnel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Wheat;
			this->btnPersonnel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Tan;
			this->btnPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPersonnel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnPersonnel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPersonnel.Image")));
			this->btnPersonnel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersonnel->Location = System::Drawing::Point(0, 151);
			this->btnPersonnel->Name = L"btnPersonnel";
			this->btnPersonnel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnPersonnel->Size = System::Drawing::Size(226, 53);
			this->btnPersonnel->TabIndex = 0;
			this->btnPersonnel->Text = L"    Personnel";
			this->btnPersonnel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersonnel->UseVisualStyleBackColor = false;
			this->btnPersonnel->Click += gcnew System::EventHandler(this, &Interface::btnPersonnel_Click);
			// 
			// btnCommande
			// 
			this->btnCommande->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnCommande->BackColor = System::Drawing::Color::Transparent;
			this->btnCommande->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCommande->FlatAppearance->BorderSize = 0;
			this->btnCommande->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Wheat;
			this->btnCommande->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Tan;
			this->btnCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCommande->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCommande->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCommande->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCommande.Image")));
			this->btnCommande->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCommande->Location = System::Drawing::Point(0, 101);
			this->btnCommande->Name = L"btnCommande";
			this->btnCommande->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnCommande->Size = System::Drawing::Size(226, 52);
			this->btnCommande->TabIndex = 0;
			this->btnCommande->Text = L"    Commande";
			this->btnCommande->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCommande->UseVisualStyleBackColor = false;
			this->btnCommande->Click += gcnew System::EventHandler(this, &Interface::btnCommande_Click);
			// 
			// btnClient
			// 
			this->btnClient->BackColor = System::Drawing::Color::Transparent;
			this->btnClient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClient->FlatAppearance->BorderSize = 0;
			this->btnClient->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Wheat;
			this->btnClient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Tan;
			this->btnClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClient->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClient.Image")));
			this->btnClient->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClient->Location = System::Drawing::Point(0, 56);
			this->btnClient->Name = L"btnClient";
			this->btnClient->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnClient->Size = System::Drawing::Size(226, 47);
			this->btnClient->TabIndex = 0;
			this->btnClient->Text = L"    Client";
			this->btnClient->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClient->UseVisualStyleBackColor = false;
			this->btnClient->Click += gcnew System::EventHandler(this, &Interface::btnClient_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Right;
			this->tabControl1->Controls->Add(this->tabClient);
			this->tabControl1->Controls->Add(this->tabCommande);
			this->tabControl1->Controls->Add(this->tabPersonnel);
			this->tabControl1->Controls->Add(this->tabStock);
			this->tabControl1->Controls->Add(this->tabStatistique);
			this->tabControl1->Controls->Add(this->tabApropos);
			this->tabControl1->Controls->Add(this->tabParametres);
			this->tabControl1->Location = System::Drawing::Point(-15, -13);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(949, 648);
			this->tabControl1->TabIndex = 0;
			// 
			// tabClient
			// 
			this->tabClient->BackColor = System::Drawing::Color::LightSteelBlue;
			this->tabClient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabClient->Controls->Add(this->label13);
			this->tabClient->Controls->Add(this->progressBar1);
			this->tabClient->Controls->Add(this->pnlDatabase);
			this->tabClient->Controls->Add(this->btnExecuter);
			this->tabClient->Controls->Add(this->datePremierAchat);
			this->tabClient->Controls->Add(this->dateNaissance);
			this->tabClient->Controls->Add(this->boxAdressFacturation);
			this->tabClient->Controls->Add(this->boxAdressLivraison);
			this->tabClient->Controls->Add(this->boxNom);
			this->tabClient->Controls->Add(this->boxPrenom);
			this->tabClient->Controls->Add(this->boxIDClient);
			this->tabClient->Controls->Add(this->btnClientAfficher);
			this->tabClient->Controls->Add(this->btnClientSupprimer);
			this->tabClient->Controls->Add(this->btnClientModifier);
			this->tabClient->Controls->Add(this->radioButton2);
			this->tabClient->Controls->Add(this->label43);
			this->tabClient->Controls->Add(this->btnClientCréer);
			this->tabClient->Controls->Add(this->label42);
			this->tabClient->Controls->Add(this->label12);
			this->tabClient->Controls->Add(this->label10);
			this->tabClient->Controls->Add(this->label11);
			this->tabClient->Controls->Add(this->label9);
			this->tabClient->Controls->Add(this->label8);
			this->tabClient->Controls->Add(this->label7);
			this->tabClient->Controls->Add(this->label6);
			this->tabClient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabClient->Location = System::Drawing::Point(4, 4);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->Size = System::Drawing::Size(922, 640);
			this->tabClient->TabIndex = 0;
			this->tabClient->Text = L"Client";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(669, 573);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 11;
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::Color::LimeGreen;
			this->progressBar1->Location = System::Drawing::Point(672, 547);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(166, 23);
			this->progressBar1->TabIndex = 10;
			// 
			// pnlDatabase
			// 
			this->pnlDatabase->BackColor = System::Drawing::Color::Transparent;
			this->pnlDatabase->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlDatabase->Controls->Add(this->dataGridViewClient);
			this->pnlDatabase->Location = System::Drawing::Point(179, 28);
			this->pnlDatabase->Name = L"pnlDatabase";
			this->pnlDatabase->Size = System::Drawing::Size(659, 299);
			this->pnlDatabase->TabIndex = 9;
			// 
			// dataGridViewClient
			// 
			this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClient->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewClient->Location = System::Drawing::Point(0, 0);
			this->dataGridViewClient->Name = L"dataGridViewClient";
			this->dataGridViewClient->Size = System::Drawing::Size(657, 297);
			this->dataGridViewClient->TabIndex = 0;
			// 
			// btnExecuter
			// 
			this->btnExecuter->BackColor = System::Drawing::Color::Transparent;
			this->btnExecuter->Location = System::Drawing::Point(672, 484);
			this->btnExecuter->Name = L"btnExecuter";
			this->btnExecuter->Size = System::Drawing::Size(166, 57);
			this->btnExecuter->TabIndex = 8;
			this->btnExecuter->Text = L"Executer";
			this->btnExecuter->UseVisualStyleBackColor = false;
			this->btnExecuter->Click += gcnew System::EventHandler(this, &Interface::btnExecuter_Click);
			// 
			// datePremierAchat
			// 
			this->datePremierAchat->CalendarFont = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePremierAchat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePremierAchat->Location = System::Drawing::Point(586, 428);
			this->datePremierAchat->Name = L"datePremierAchat";
			this->datePremierAchat->Size = System::Drawing::Size(252, 29);
			this->datePremierAchat->TabIndex = 7;
			// 
			// dateNaissance
			// 
			this->dateNaissance->CalendarFont = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateNaissance->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateNaissance->Location = System::Drawing::Point(586, 379);
			this->dateNaissance->Name = L"dateNaissance";
			this->dateNaissance->Size = System::Drawing::Size(252, 29);
			this->dateNaissance->TabIndex = 7;
			// 
			// boxAdressFacturation
			// 
			this->boxAdressFacturation->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxAdressFacturation->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxAdressFacturation->Location = System::Drawing::Point(177, 570);
			this->boxAdressFacturation->Name = L"boxAdressFacturation";
			this->boxAdressFacturation->Size = System::Drawing::Size(230, 29);
			this->boxAdressFacturation->TabIndex = 6;
			this->boxAdressFacturation->TabStop = false;
			// 
			// boxAdressLivraison
			// 
			this->boxAdressLivraison->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxAdressLivraison->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxAdressLivraison->Location = System::Drawing::Point(177, 520);
			this->boxAdressLivraison->Name = L"boxAdressLivraison";
			this->boxAdressLivraison->Size = System::Drawing::Size(230, 29);
			this->boxAdressLivraison->TabIndex = 6;
			this->boxAdressLivraison->TabStop = false;
			// 
			// boxNom
			// 
			this->boxNom->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxNom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNom->Location = System::Drawing::Point(99, 472);
			this->boxNom->Name = L"boxNom";
			this->boxNom->Size = System::Drawing::Size(230, 29);
			this->boxNom->TabIndex = 6;
			this->boxNom->TabStop = false;
			// 
			// boxPrenom
			// 
			this->boxPrenom->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxPrenom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxPrenom->Location = System::Drawing::Point(99, 429);
			this->boxPrenom->Name = L"boxPrenom";
			this->boxPrenom->Size = System::Drawing::Size(230, 29);
			this->boxPrenom->TabIndex = 6;
			this->boxPrenom->TabStop = false;
			// 
			// boxIDClient
			// 
			this->boxIDClient->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxIDClient->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDClient->Location = System::Drawing::Point(99, 384);
			this->boxIDClient->Name = L"boxIDClient";
			this->boxIDClient->Size = System::Drawing::Size(230, 29);
			this->boxIDClient->TabIndex = 6;
			this->boxIDClient->TabStop = false;
			// 
			// btnClientAfficher
			// 
			this->btnClientAfficher->AutoSize = true;
			this->btnClientAfficher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClientAfficher->Location = System::Drawing::Point(28, 209);
			this->btnClientAfficher->Name = L"btnClientAfficher";
			this->btnClientAfficher->Size = System::Drawing::Size(82, 25);
			this->btnClientAfficher->TabIndex = 5;
			this->btnClientAfficher->TabStop = true;
			this->btnClientAfficher->Text = L"Afficher";
			this->btnClientAfficher->UseVisualStyleBackColor = true;
			this->btnClientAfficher->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnClientAfficher_CheckedChanged);
			// 
			// btnClientSupprimer
			// 
			this->btnClientSupprimer->AutoSize = true;
			this->btnClientSupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClientSupprimer->Location = System::Drawing::Point(28, 180);
			this->btnClientSupprimer->Name = L"btnClientSupprimer";
			this->btnClientSupprimer->Size = System::Drawing::Size(102, 25);
			this->btnClientSupprimer->TabIndex = 5;
			this->btnClientSupprimer->TabStop = true;
			this->btnClientSupprimer->Text = L"Supprimer";
			this->btnClientSupprimer->UseVisualStyleBackColor = true;
			this->btnClientSupprimer->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnClientSupprimer_CheckedChanged);
			// 
			// btnClientModifier
			// 
			this->btnClientModifier->AutoSize = true;
			this->btnClientModifier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClientModifier->Location = System::Drawing::Point(28, 149);
			this->btnClientModifier->Name = L"btnClientModifier";
			this->btnClientModifier->Size = System::Drawing::Size(87, 25);
			this->btnClientModifier->TabIndex = 5;
			this->btnClientModifier->TabStop = true;
			this->btnClientModifier->Text = L"Modifier";
			this->btnClientModifier->UseVisualStyleBackColor = true;
			this->btnClientModifier->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnClientModifier_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(28, 214);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(63, 25);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Nom";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnClientCréer_CheckedChanged);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(24, 573);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(144, 21);
			this->label43->TabIndex = 3;
			this->label43->Text = L"Adresse facturation";
			// 
			// btnClientCréer
			// 
			this->btnClientCréer->AutoSize = true;
			this->btnClientCréer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClientCréer->Location = System::Drawing::Point(28, 118);
			this->btnClientCréer->Name = L"btnClientCréer";
			this->btnClientCréer->Size = System::Drawing::Size(66, 25);
			this->btnClientCréer->TabIndex = 4;
			this->btnClientCréer->TabStop = true;
			this->btnClientCréer->Text = L"Créer";
			this->btnClientCréer->UseVisualStyleBackColor = true;
			this->btnClientCréer->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnClientCréer_CheckedChanged);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(24, 523);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(128, 21);
			this->label42->TabIndex = 3;
			this->label42->Text = L"Adresse livraison";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(438, 431);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(142, 21);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Date premier achat";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(24, 475);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 21);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Nom";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(438, 385);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(134, 21);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Date de naissance";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(24, 432);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 21);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Prenom";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(24, 387);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 21);
			this->label8->TabIndex = 3;
			this->label8->Text = L"ID";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(24, 346);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 21);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Informations :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 21);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Opération :";
			// 
			// tabCommande
			// 
			this->tabCommande->BackColor = System::Drawing::Color::LightSteelBlue;
			this->tabCommande->Controls->Add(this->label14);
			this->tabCommande->Controls->Add(this->progressBarCommande);
			this->tabCommande->Controls->Add(this->panel5);
			this->tabCommande->Controls->Add(this->btnExecuterCommande);
			this->tabCommande->Controls->Add(this->dateLivraison);
			this->tabCommande->Controls->Add(this->dateEnvoie);
			this->tabCommande->Controls->Add(this->boxRefCommande);
			this->tabCommande->Controls->Add(this->boxIDCommande);
			this->tabCommande->Controls->Add(this->btnCommandeAfficher);
			this->tabCommande->Controls->Add(this->btnCommandeSupprimer);
			this->tabCommande->Controls->Add(this->btnCommandeModifier);
			this->tabCommande->Controls->Add(this->radioButton5);
			this->tabCommande->Controls->Add(this->btnCommandeCréer);
			this->tabCommande->Controls->Add(this->label15);
			this->tabCommande->Controls->Add(this->label17);
			this->tabCommande->Controls->Add(this->label18);
			this->tabCommande->Controls->Add(this->label19);
			this->tabCommande->Controls->Add(this->label20);
			this->tabCommande->Controls->Add(this->label21);
			this->tabCommande->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabCommande->Location = System::Drawing::Point(4, 4);
			this->tabCommande->Name = L"tabCommande";
			this->tabCommande->Padding = System::Windows::Forms::Padding(3);
			this->tabCommande->Size = System::Drawing::Size(922, 640);
			this->tabCommande->TabIndex = 1;
			this->tabCommande->Text = L"Commande";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(673, 575);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 32;
			// 
			// progressBarCommande
			// 
			this->progressBarCommande->ForeColor = System::Drawing::Color::LimeGreen;
			this->progressBarCommande->Location = System::Drawing::Point(671, 547);
			this->progressBarCommande->Name = L"progressBarCommande";
			this->progressBarCommande->Size = System::Drawing::Size(166, 23);
			this->progressBarCommande->TabIndex = 31;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->dataGridViewCommande);
			this->panel5->Location = System::Drawing::Point(178, 28);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(659, 299);
			this->panel5->TabIndex = 30;
			// 
			// dataGridViewCommande
			// 
			this->dataGridViewCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCommande->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewCommande->Location = System::Drawing::Point(0, 0);
			this->dataGridViewCommande->Name = L"dataGridViewCommande";
			this->dataGridViewCommande->Size = System::Drawing::Size(657, 297);
			this->dataGridViewCommande->TabIndex = 0;
			// 
			// btnExecuterCommande
			// 
			this->btnExecuterCommande->BackColor = System::Drawing::Color::Transparent;
			this->btnExecuterCommande->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExecuterCommande->Location = System::Drawing::Point(671, 484);
			this->btnExecuterCommande->Name = L"btnExecuterCommande";
			this->btnExecuterCommande->Size = System::Drawing::Size(166, 57);
			this->btnExecuterCommande->TabIndex = 29;
			this->btnExecuterCommande->Text = L"Executer";
			this->btnExecuterCommande->UseVisualStyleBackColor = false;
			this->btnExecuterCommande->Click += gcnew System::EventHandler(this, &Interface::btnExecuterCommande_Click);
			// 
			// dateLivraison
			// 
			this->dateLivraison->CalendarFont = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLivraison->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLivraison->Location = System::Drawing::Point(585, 428);
			this->dateLivraison->Name = L"dateLivraison";
			this->dateLivraison->Size = System::Drawing::Size(252, 29);
			this->dateLivraison->TabIndex = 28;
			// 
			// dateEnvoie
			// 
			this->dateEnvoie->CalendarFont = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateEnvoie->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateEnvoie->Location = System::Drawing::Point(585, 379);
			this->dateEnvoie->Name = L"dateEnvoie";
			this->dateEnvoie->Size = System::Drawing::Size(252, 29);
			this->dateEnvoie->TabIndex = 27;
			// 
			// boxRefCommande
			// 
			this->boxRefCommande->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxRefCommande->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxRefCommande->Location = System::Drawing::Point(146, 427);
			this->boxRefCommande->Name = L"boxRefCommande";
			this->boxRefCommande->Size = System::Drawing::Size(230, 29);
			this->boxRefCommande->TabIndex = 25;
			this->boxRefCommande->TabStop = false;
			// 
			// boxIDCommande
			// 
			this->boxIDCommande->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxIDCommande->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDCommande->Location = System::Drawing::Point(146, 382);
			this->boxIDCommande->Name = L"boxIDCommande";
			this->boxIDCommande->Size = System::Drawing::Size(230, 29);
			this->boxIDCommande->TabIndex = 24;
			this->boxIDCommande->TabStop = false;
			// 
			// btnCommandeAfficher
			// 
			this->btnCommandeAfficher->AutoSize = true;
			this->btnCommandeAfficher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCommandeAfficher->Location = System::Drawing::Point(27, 209);
			this->btnCommandeAfficher->Name = L"btnCommandeAfficher";
			this->btnCommandeAfficher->Size = System::Drawing::Size(82, 25);
			this->btnCommandeAfficher->TabIndex = 23;
			this->btnCommandeAfficher->Text = L"Afficher";
			this->btnCommandeAfficher->UseVisualStyleBackColor = true;
			this->btnCommandeAfficher->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnCommandeAfficher_CheckedChanged_1);
			// 
			// btnCommandeSupprimer
			// 
			this->btnCommandeSupprimer->AutoSize = true;
			this->btnCommandeSupprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCommandeSupprimer->Location = System::Drawing::Point(27, 180);
			this->btnCommandeSupprimer->Name = L"btnCommandeSupprimer";
			this->btnCommandeSupprimer->Size = System::Drawing::Size(102, 25);
			this->btnCommandeSupprimer->TabIndex = 22;
			this->btnCommandeSupprimer->Text = L"Supprimer";
			this->btnCommandeSupprimer->UseVisualStyleBackColor = true;
			this->btnCommandeSupprimer->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnCommandeSupprimer_CheckedChanged_1);
			// 
			// btnCommandeModifier
			// 
			this->btnCommandeModifier->AutoSize = true;
			this->btnCommandeModifier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCommandeModifier->Location = System::Drawing::Point(27, 149);
			this->btnCommandeModifier->Name = L"btnCommandeModifier";
			this->btnCommandeModifier->Size = System::Drawing::Size(87, 25);
			this->btnCommandeModifier->TabIndex = 21;
			this->btnCommandeModifier->Text = L"Modifier";
			this->btnCommandeModifier->UseVisualStyleBackColor = true;
			this->btnCommandeModifier->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnCommandeModifier_CheckedChanged_1);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(27, 214);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(63, 25);
			this->radioButton5->TabIndex = 20;
			this->radioButton5->Text = L"Nom";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// btnCommandeCréer
			// 
			this->btnCommandeCréer->AutoSize = true;
			this->btnCommandeCréer->Checked = true;
			this->btnCommandeCréer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCommandeCréer->Location = System::Drawing::Point(27, 118);
			this->btnCommandeCréer->Name = L"btnCommandeCréer";
			this->btnCommandeCréer->Size = System::Drawing::Size(66, 25);
			this->btnCommandeCréer->TabIndex = 19;
			this->btnCommandeCréer->TabStop = true;
			this->btnCommandeCréer->Text = L"Créer";
			this->btnCommandeCréer->UseVisualStyleBackColor = true;
			this->btnCommandeCréer->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnCommandeCréer_CheckedChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(454, 431);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(126, 21);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Date de livraison";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(454, 385);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(105, 21);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Date d\'envoie";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(23, 432);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(120, 21);
			this->label18->TabIndex = 14;
			this->label18->Text = L"Ref. Commande";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(23, 387);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(25, 21);
			this->label19->TabIndex = 13;
			this->label19->Text = L"ID";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(23, 346);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(117, 21);
			this->label20->TabIndex = 18;
			this->label20->Text = L"Informations :";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(23, 90);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(95, 21);
			this->label21->TabIndex = 12;
			this->label21->Text = L"Opération :";
			// 
			// tabPersonnel
			// 
			this->tabPersonnel->BackColor = System::Drawing::Color::LightSteelBlue;
			this->tabPersonnel->Controls->Add(this->label16);
			this->tabPersonnel->Controls->Add(this->progressBarPersonnel);
			this->tabPersonnel->Controls->Add(this->panel6);
			this->tabPersonnel->Controls->Add(this->btnExecuterPersonnel);
			this->tabPersonnel->Controls->Add(this->boxNomPersonnel);
			this->tabPersonnel->Controls->Add(this->BoxPrenomPersonnel);
			this->tabPersonnel->Controls->Add(this->boxIDPersonnel);
			this->tabPersonnel->Controls->Add(this->btnAfficherPersonnel);
			this->tabPersonnel->Controls->Add(this->btnSupprimerPersonnel);
			this->tabPersonnel->Controls->Add(this->btnModifierPersonnel);
			this->tabPersonnel->Controls->Add(this->radioButton6);
			this->tabPersonnel->Controls->Add(this->btnCréerPersonnel);
			this->tabPersonnel->Controls->Add(this->label22);
			this->tabPersonnel->Controls->Add(this->label24);
			this->tabPersonnel->Controls->Add(this->label25);
			this->tabPersonnel->Controls->Add(this->label26);
			this->tabPersonnel->Controls->Add(this->label27);
			this->tabPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPersonnel->Location = System::Drawing::Point(4, 4);
			this->tabPersonnel->Name = L"tabPersonnel";
			this->tabPersonnel->Padding = System::Windows::Forms::Padding(3);
			this->tabPersonnel->Size = System::Drawing::Size(922, 640);
			this->tabPersonnel->TabIndex = 2;
			this->tabPersonnel->Text = L"Personnel";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(673, 575);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 51;
			// 
			// progressBarPersonnel
			// 
			this->progressBarPersonnel->ForeColor = System::Drawing::Color::LimeGreen;
			this->progressBarPersonnel->Location = System::Drawing::Point(671, 547);
			this->progressBarPersonnel->Name = L"progressBarPersonnel";
			this->progressBarPersonnel->Size = System::Drawing::Size(166, 23);
			this->progressBarPersonnel->TabIndex = 50;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->dataGridViewPersonnel);
			this->panel6->Location = System::Drawing::Point(178, 28);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(659, 299);
			this->panel6->TabIndex = 49;
			// 
			// dataGridViewPersonnel
			// 
			this->dataGridViewPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPersonnel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewPersonnel->Location = System::Drawing::Point(0, 0);
			this->dataGridViewPersonnel->Name = L"dataGridViewPersonnel";
			this->dataGridViewPersonnel->Size = System::Drawing::Size(657, 297);
			this->dataGridViewPersonnel->TabIndex = 0;
			// 
			// btnExecuterPersonnel
			// 
			this->btnExecuterPersonnel->BackColor = System::Drawing::Color::Transparent;
			this->btnExecuterPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExecuterPersonnel->Location = System::Drawing::Point(671, 484);
			this->btnExecuterPersonnel->Name = L"btnExecuterPersonnel";
			this->btnExecuterPersonnel->Size = System::Drawing::Size(166, 57);
			this->btnExecuterPersonnel->TabIndex = 48;
			this->btnExecuterPersonnel->Text = L"Executer";
			this->btnExecuterPersonnel->UseVisualStyleBackColor = false;
			this->btnExecuterPersonnel->Click += gcnew System::EventHandler(this, &Interface::btnExecuterPersonnel_Click);
			// 
			// boxNomPersonnel
			// 
			this->boxNomPersonnel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxNomPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxNomPersonnel->Location = System::Drawing::Point(105, 478);
			this->boxNomPersonnel->Name = L"boxNomPersonnel";
			this->boxNomPersonnel->Size = System::Drawing::Size(230, 29);
			this->boxNomPersonnel->TabIndex = 45;
			this->boxNomPersonnel->TabStop = false;
			// 
			// BoxPrenomPersonnel
			// 
			this->BoxPrenomPersonnel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->BoxPrenomPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BoxPrenomPersonnel->Location = System::Drawing::Point(105, 429);
			this->BoxPrenomPersonnel->Name = L"BoxPrenomPersonnel";
			this->BoxPrenomPersonnel->Size = System::Drawing::Size(230, 29);
			this->BoxPrenomPersonnel->TabIndex = 45;
			this->BoxPrenomPersonnel->TabStop = false;
			// 
			// boxIDPersonnel
			// 
			this->boxIDPersonnel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxIDPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDPersonnel->Location = System::Drawing::Point(105, 384);
			this->boxIDPersonnel->Name = L"boxIDPersonnel";
			this->boxIDPersonnel->Size = System::Drawing::Size(230, 29);
			this->boxIDPersonnel->TabIndex = 44;
			this->boxIDPersonnel->TabStop = false;
			// 
			// btnAfficherPersonnel
			// 
			this->btnAfficherPersonnel->AutoSize = true;
			this->btnAfficherPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAfficherPersonnel->Location = System::Drawing::Point(27, 209);
			this->btnAfficherPersonnel->Name = L"btnAfficherPersonnel";
			this->btnAfficherPersonnel->Size = System::Drawing::Size(82, 25);
			this->btnAfficherPersonnel->TabIndex = 43;
			this->btnAfficherPersonnel->Text = L"Afficher";
			this->btnAfficherPersonnel->UseVisualStyleBackColor = true;
			this->btnAfficherPersonnel->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnAfficherPersonnel_CheckedChanged);
			// 
			// btnSupprimerPersonnel
			// 
			this->btnSupprimerPersonnel->AutoSize = true;
			this->btnSupprimerPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupprimerPersonnel->Location = System::Drawing::Point(27, 180);
			this->btnSupprimerPersonnel->Name = L"btnSupprimerPersonnel";
			this->btnSupprimerPersonnel->Size = System::Drawing::Size(102, 25);
			this->btnSupprimerPersonnel->TabIndex = 42;
			this->btnSupprimerPersonnel->Text = L"Supprimer";
			this->btnSupprimerPersonnel->UseVisualStyleBackColor = true;
			this->btnSupprimerPersonnel->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnSupprimerPersonnel_CheckedChanged);
			// 
			// btnModifierPersonnel
			// 
			this->btnModifierPersonnel->AutoSize = true;
			this->btnModifierPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModifierPersonnel->Location = System::Drawing::Point(27, 149);
			this->btnModifierPersonnel->Name = L"btnModifierPersonnel";
			this->btnModifierPersonnel->Size = System::Drawing::Size(87, 25);
			this->btnModifierPersonnel->TabIndex = 41;
			this->btnModifierPersonnel->Text = L"Modifier";
			this->btnModifierPersonnel->UseVisualStyleBackColor = true;
			this->btnModifierPersonnel->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnModifierPersonnel_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(27, 214);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(63, 25);
			this->radioButton6->TabIndex = 40;
			this->radioButton6->Text = L"Nom";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// btnCréerPersonnel
			// 
			this->btnCréerPersonnel->AutoSize = true;
			this->btnCréerPersonnel->Checked = true;
			this->btnCréerPersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCréerPersonnel->Location = System::Drawing::Point(27, 118);
			this->btnCréerPersonnel->Name = L"btnCréerPersonnel";
			this->btnCréerPersonnel->Size = System::Drawing::Size(66, 25);
			this->btnCréerPersonnel->TabIndex = 39;
			this->btnCréerPersonnel->TabStop = true;
			this->btnCréerPersonnel->Text = L"Créer";
			this->btnCréerPersonnel->UseVisualStyleBackColor = true;
			this->btnCréerPersonnel->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnCréerPersonnel_CheckedChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(23, 476);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(45, 21);
			this->label22->TabIndex = 35;
			this->label22->Text = L"Nom";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(23, 432);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(65, 21);
			this->label24->TabIndex = 35;
			this->label24->Text = L"Prenom";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(23, 387);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(25, 21);
			this->label25->TabIndex = 34;
			this->label25->Text = L"ID";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(23, 346);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(117, 21);
			this->label26->TabIndex = 38;
			this->label26->Text = L"Informations :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(23, 90);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(95, 21);
			this->label27->TabIndex = 33;
			this->label27->Text = L"Opération :";
			// 
			// tabStock
			// 
			this->tabStock->BackColor = System::Drawing::Color::LightSteelBlue;
			this->tabStock->Controls->Add(this->label23);
			this->tabStock->Controls->Add(this->progressBarStock);
			this->tabStock->Controls->Add(this->panel16);
			this->tabStock->Controls->Add(this->btnExecuterStock);
			this->tabStock->Controls->Add(this->boxReaprov);
			this->tabStock->Controls->Add(this->boxTVA);
			this->tabStock->Controls->Add(this->boxArticle);
			this->tabStock->Controls->Add(this->boxIDStock);
			this->tabStock->Controls->Add(this->btnAfficherStock);
			this->tabStock->Controls->Add(this->btnSupprimerStock);
			this->tabStock->Controls->Add(this->btnModifierStock);
			this->tabStock->Controls->Add(this->radioButton7);
			this->tabStock->Controls->Add(this->label33);
			this->tabStock->Controls->Add(this->btnCreerStock);
			this->tabStock->Controls->Add(this->label28);
			this->tabStock->Controls->Add(this->label29);
			this->tabStock->Controls->Add(this->label30);
			this->tabStock->Controls->Add(this->label31);
			this->tabStock->Controls->Add(this->label32);
			this->tabStock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabStock->Location = System::Drawing::Point(4, 4);
			this->tabStock->Name = L"tabStock";
			this->tabStock->Size = System::Drawing::Size(922, 640);
			this->tabStock->TabIndex = 3;
			this->tabStock->Text = L"Stock";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(673, 575);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 13);
			this->label23->TabIndex = 68;
			// 
			// progressBarStock
			// 
			this->progressBarStock->ForeColor = System::Drawing::Color::LimeGreen;
			this->progressBarStock->Location = System::Drawing::Point(671, 547);
			this->progressBarStock->Name = L"progressBarStock";
			this->progressBarStock->Size = System::Drawing::Size(166, 23);
			this->progressBarStock->TabIndex = 67;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Transparent;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Controls->Add(this->dataGridViewStock);
			this->panel16->Location = System::Drawing::Point(178, 28);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(659, 299);
			this->panel16->TabIndex = 66;
			// 
			// dataGridViewStock
			// 
			this->dataGridViewStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStock->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewStock->Location = System::Drawing::Point(0, 0);
			this->dataGridViewStock->Name = L"dataGridViewStock";
			this->dataGridViewStock->Size = System::Drawing::Size(657, 297);
			this->dataGridViewStock->TabIndex = 0;
			// 
			// btnExecuterStock
			// 
			this->btnExecuterStock->BackColor = System::Drawing::Color::Transparent;
			this->btnExecuterStock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExecuterStock->Location = System::Drawing::Point(671, 484);
			this->btnExecuterStock->Name = L"btnExecuterStock";
			this->btnExecuterStock->Size = System::Drawing::Size(166, 57);
			this->btnExecuterStock->TabIndex = 65;
			this->btnExecuterStock->Text = L"Executer";
			this->btnExecuterStock->UseVisualStyleBackColor = false;
			this->btnExecuterStock->Click += gcnew System::EventHandler(this, &Interface::btnExecuterStock_Click);
			// 
			// boxReaprov
			// 
			this->boxReaprov->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxReaprov->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxReaprov->Location = System::Drawing::Point(217, 529);
			this->boxReaprov->Name = L"boxReaprov";
			this->boxReaprov->Size = System::Drawing::Size(149, 29);
			this->boxReaprov->TabIndex = 64;
			this->boxReaprov->TabStop = false;
			// 
			// boxTVA
			// 
			this->boxTVA->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxTVA->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxTVA->Location = System::Drawing::Point(217, 478);
			this->boxTVA->Name = L"boxTVA";
			this->boxTVA->Size = System::Drawing::Size(149, 29);
			this->boxTVA->TabIndex = 64;
			this->boxTVA->TabStop = false;
			// 
			// boxArticle
			// 
			this->boxArticle->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxArticle->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxArticle->Location = System::Drawing::Point(136, 429);
			this->boxArticle->Name = L"boxArticle";
			this->boxArticle->Size = System::Drawing::Size(230, 29);
			this->boxArticle->TabIndex = 63;
			this->boxArticle->TabStop = false;
			// 
			// boxIDStock
			// 
			this->boxIDStock->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxIDStock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDStock->Location = System::Drawing::Point(136, 384);
			this->boxIDStock->Name = L"boxIDStock";
			this->boxIDStock->Size = System::Drawing::Size(230, 29);
			this->boxIDStock->TabIndex = 62;
			this->boxIDStock->TabStop = false;
			// 
			// btnAfficherStock
			// 
			this->btnAfficherStock->AutoSize = true;
			this->btnAfficherStock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAfficherStock->Location = System::Drawing::Point(27, 209);
			this->btnAfficherStock->Name = L"btnAfficherStock";
			this->btnAfficherStock->Size = System::Drawing::Size(82, 25);
			this->btnAfficherStock->TabIndex = 61;
			this->btnAfficherStock->Text = L"Afficher";
			this->btnAfficherStock->UseVisualStyleBackColor = true;
			// 
			// btnSupprimerStock
			// 
			this->btnSupprimerStock->AutoSize = true;
			this->btnSupprimerStock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupprimerStock->Location = System::Drawing::Point(27, 180);
			this->btnSupprimerStock->Name = L"btnSupprimerStock";
			this->btnSupprimerStock->Size = System::Drawing::Size(102, 25);
			this->btnSupprimerStock->TabIndex = 60;
			this->btnSupprimerStock->Text = L"Supprimer";
			this->btnSupprimerStock->UseVisualStyleBackColor = true;
			this->btnSupprimerStock->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnSupprimerStock_CheckedChanged);
			// 
			// btnModifierStock
			// 
			this->btnModifierStock->AutoSize = true;
			this->btnModifierStock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModifierStock->Location = System::Drawing::Point(27, 149);
			this->btnModifierStock->Name = L"btnModifierStock";
			this->btnModifierStock->Size = System::Drawing::Size(87, 25);
			this->btnModifierStock->TabIndex = 59;
			this->btnModifierStock->Text = L"Modifier";
			this->btnModifierStock->UseVisualStyleBackColor = true;
			this->btnModifierStock->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnModifierStock_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(27, 214);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(63, 25);
			this->radioButton7->TabIndex = 58;
			this->radioButton7->Text = L"Nom";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(23, 527);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(188, 21);
			this->label33->TabIndex = 55;
			this->label33->Text = L"Seuil réaprovisionnement";
			// 
			// btnCreerStock
			// 
			this->btnCreerStock->AutoSize = true;
			this->btnCreerStock->Checked = true;
			this->btnCreerStock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreerStock->Location = System::Drawing::Point(27, 118);
			this->btnCreerStock->Name = L"btnCreerStock";
			this->btnCreerStock->Size = System::Drawing::Size(66, 25);
			this->btnCreerStock->TabIndex = 57;
			this->btnCreerStock->TabStop = true;
			this->btnCreerStock->Text = L"Créer";
			this->btnCreerStock->UseVisualStyleBackColor = true;
			this->btnCreerStock->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnCreerStock_CheckedChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(23, 476);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(100, 21);
			this->label28->TabIndex = 55;
			this->label28->Text = L"Montant TVA";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(23, 432);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(91, 21);
			this->label29->TabIndex = 54;
			this->label29->Text = L"Nom article";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(23, 387);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(25, 21);
			this->label30->TabIndex = 53;
			this->label30->Text = L"ID";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(23, 346);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(117, 21);
			this->label31->TabIndex = 56;
			this->label31->Text = L"Informations :";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(23, 90);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(95, 21);
			this->label32->TabIndex = 52;
			this->label32->Text = L"Opération :";
			// 
			// tabStatistique
			// 
			this->tabStatistique->BackColor = System::Drawing::Color::LightSteelBlue;
			this->tabStatistique->Controls->Add(this->label34);
			this->tabStatistique->Controls->Add(this->progressBarStat);
			this->tabStatistique->Controls->Add(this->panel17);
			this->tabStatistique->Controls->Add(this->btnExecuterStat);
			this->tabStatistique->Controls->Add(this->textBox1);
			this->tabStatistique->Controls->Add(this->textBox2);
			this->tabStatistique->Controls->Add(this->textBox3);
			this->tabStatistique->Controls->Add(this->boxIDStat);
			this->tabStatistique->Controls->Add(this->btnAfficherStat);
			this->tabStatistique->Controls->Add(this->btnSupprimerStat);
			this->tabStatistique->Controls->Add(this->btnModifierStat);
			this->tabStatistique->Controls->Add(this->radioButton8);
			this->tabStatistique->Controls->Add(this->label35);
			this->tabStatistique->Controls->Add(this->btnCreerStat);
			this->tabStatistique->Controls->Add(this->label36);
			this->tabStatistique->Controls->Add(this->label37);
			this->tabStatistique->Controls->Add(this->label38);
			this->tabStatistique->Controls->Add(this->label39);
			this->tabStatistique->Controls->Add(this->label40);
			this->tabStatistique->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabStatistique->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabStatistique->Location = System::Drawing::Point(4, 4);
			this->tabStatistique->Name = L"tabStatistique";
			this->tabStatistique->Size = System::Drawing::Size(922, 640);
			this->tabStatistique->TabIndex = 4;
			this->tabStatistique->Text = L"Statistiques";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(673, 575);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(0, 13);
			this->label34->TabIndex = 87;
			// 
			// progressBarStat
			// 
			this->progressBarStat->ForeColor = System::Drawing::Color::LimeGreen;
			this->progressBarStat->Location = System::Drawing::Point(671, 547);
			this->progressBarStat->Name = L"progressBarStat";
			this->progressBarStat->Size = System::Drawing::Size(166, 23);
			this->progressBarStat->TabIndex = 86;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Transparent;
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Controls->Add(this->dataGridViewStat);
			this->panel17->Location = System::Drawing::Point(178, 28);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(659, 299);
			this->panel17->TabIndex = 85;
			// 
			// dataGridViewStat
			// 
			this->dataGridViewStat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewStat->Location = System::Drawing::Point(0, 0);
			this->dataGridViewStat->Name = L"dataGridViewStat";
			this->dataGridViewStat->Size = System::Drawing::Size(657, 297);
			this->dataGridViewStat->TabIndex = 0;
			// 
			// btnExecuterStat
			// 
			this->btnExecuterStat->BackColor = System::Drawing::Color::Transparent;
			this->btnExecuterStat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExecuterStat->Location = System::Drawing::Point(671, 484);
			this->btnExecuterStat->Name = L"btnExecuterStat";
			this->btnExecuterStat->Size = System::Drawing::Size(166, 57);
			this->btnExecuterStat->TabIndex = 84;
			this->btnExecuterStat->Text = L"Executer";
			this->btnExecuterStat->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(217, 529);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 29);
			this->textBox1->TabIndex = 83;
			this->textBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(217, 478);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(149, 29);
			this->textBox2->TabIndex = 82;
			this->textBox2->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(136, 429);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(230, 29);
			this->textBox3->TabIndex = 81;
			this->textBox3->TabStop = false;
			// 
			// boxIDStat
			// 
			this->boxIDStat->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->boxIDStat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxIDStat->Location = System::Drawing::Point(136, 384);
			this->boxIDStat->Name = L"boxIDStat";
			this->boxIDStat->Size = System::Drawing::Size(230, 29);
			this->boxIDStat->TabIndex = 80;
			this->boxIDStat->TabStop = false;
			// 
			// btnAfficherStat
			// 
			this->btnAfficherStat->AutoSize = true;
			this->btnAfficherStat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAfficherStat->Location = System::Drawing::Point(27, 209);
			this->btnAfficherStat->Name = L"btnAfficherStat";
			this->btnAfficherStat->Size = System::Drawing::Size(82, 25);
			this->btnAfficherStat->TabIndex = 79;
			this->btnAfficherStat->Text = L"Afficher";
			this->btnAfficherStat->UseVisualStyleBackColor = true;
			this->btnAfficherStat->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnAfficherStat_CheckedChanged);
			// 
			// btnSupprimerStat
			// 
			this->btnSupprimerStat->AutoSize = true;
			this->btnSupprimerStat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupprimerStat->Location = System::Drawing::Point(27, 180);
			this->btnSupprimerStat->Name = L"btnSupprimerStat";
			this->btnSupprimerStat->Size = System::Drawing::Size(102, 25);
			this->btnSupprimerStat->TabIndex = 78;
			this->btnSupprimerStat->Text = L"Supprimer";
			this->btnSupprimerStat->UseVisualStyleBackColor = true;
			this->btnSupprimerStat->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnSupprimerStat_CheckedChanged);
			// 
			// btnModifierStat
			// 
			this->btnModifierStat->AutoSize = true;
			this->btnModifierStat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModifierStat->Location = System::Drawing::Point(27, 149);
			this->btnModifierStat->Name = L"btnModifierStat";
			this->btnModifierStat->Size = System::Drawing::Size(87, 25);
			this->btnModifierStat->TabIndex = 77;
			this->btnModifierStat->Text = L"Modifier";
			this->btnModifierStat->UseVisualStyleBackColor = true;
			this->btnModifierStat->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnModifierStat_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton8->Location = System::Drawing::Point(27, 214);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(63, 25);
			this->radioButton8->TabIndex = 76;
			this->radioButton8->Text = L"Nom";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(23, 527);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(188, 21);
			this->label35->TabIndex = 73;
			this->label35->Text = L"Seuil réaprovisionnement";
			// 
			// btnCreerStat
			// 
			this->btnCreerStat->AutoSize = true;
			this->btnCreerStat->Checked = true;
			this->btnCreerStat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreerStat->Location = System::Drawing::Point(27, 118);
			this->btnCreerStat->Name = L"btnCreerStat";
			this->btnCreerStat->Size = System::Drawing::Size(66, 25);
			this->btnCreerStat->TabIndex = 75;
			this->btnCreerStat->TabStop = true;
			this->btnCreerStat->Text = L"Créer";
			this->btnCreerStat->UseVisualStyleBackColor = true;
			this->btnCreerStat->CheckedChanged += gcnew System::EventHandler(this, &Interface::btnCreerStat_CheckedChanged);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(23, 476);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(100, 21);
			this->label36->TabIndex = 72;
			this->label36->Text = L"Montant TVA";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(23, 432);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(91, 21);
			this->label37->TabIndex = 71;
			this->label37->Text = L"Nom article";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(23, 387);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(25, 21);
			this->label38->TabIndex = 70;
			this->label38->Text = L"ID";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(23, 346);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(117, 21);
			this->label39->TabIndex = 74;
			this->label39->Text = L"Informations :";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(23, 90);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(95, 21);
			this->label40->TabIndex = 69;
			this->label40->Text = L"Opération :";
			// 
			// tabApropos
			// 
			this->tabApropos->BackColor = System::Drawing::Color::LightSteelBlue;
			this->tabApropos->Controls->Add(this->richTextBox1);
			this->tabApropos->Controls->Add(this->btnPlusInformation);
			this->tabApropos->Controls->Add(this->label4);
			this->tabApropos->Controls->Add(this->label3);
			this->tabApropos->Controls->Add(this->label2);
			this->tabApropos->Location = System::Drawing::Point(4, 4);
			this->tabApropos->Name = L"tabApropos";
			this->tabApropos->Size = System::Drawing::Size(922, 640);
			this->tabApropos->TabIndex = 5;
			this->tabApropos->Text = L"A propos";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(15, 81);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(875, 460);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// btnPlusInformation
			// 
			this->btnPlusInformation->Location = System::Drawing::Point(785, 563);
			this->btnPlusInformation->Name = L"btnPlusInformation";
			this->btnPlusInformation->Size = System::Drawing::Size(105, 23);
			this->btnPlusInformation->TabIndex = 3;
			this->btnPlusInformation->Text = L"Plus d\'informations";
			this->btnPlusInformation->UseVisualStyleBackColor = true;
			this->btnPlusInformation->Click += gcnew System::EventHandler(this, &Interface::btnPlusInformation_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(426, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Condition Générales d\'utilisation (CGU)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Version : Alpha 1.0.1 ";
			// 
			// tabParametres
			// 
			this->tabParametres->BackColor = System::Drawing::Color::LightSteelBlue;
			this->tabParametres->Controls->Add(this->labelBDD);
			this->tabParametres->Controls->Add(this->progressBarBDD);
			this->tabParametres->Controls->Add(this->btnSeConnecter);
			this->tabParametres->Controls->Add(this->textDatabase);
			this->tabParametres->Controls->Add(this->labelDatabase);
			this->tabParametres->Controls->Add(this->ModeCringe);
			this->tabParametres->Controls->Add(this->label5);
			this->tabParametres->Controls->Add(this->ModeSombre);
			this->tabParametres->Controls->Add(this->ModeClair);
			this->tabParametres->Location = System::Drawing::Point(4, 4);
			this->tabParametres->Name = L"tabParametres";
			this->tabParametres->Size = System::Drawing::Size(922, 640);
			this->tabParametres->TabIndex = 6;
			this->tabParametres->Text = L"Paramètres";
			// 
			// labelBDD
			// 
			this->labelBDD->AutoSize = true;
			this->labelBDD->Location = System::Drawing::Point(36, 98);
			this->labelBDD->Name = L"labelBDD";
			this->labelBDD->Size = System::Drawing::Size(139, 13);
			this->labelBDD->TabIndex = 10;
			this->labelBDD->Text = L"Etat : connexion non établie";
			// 
			// progressBarBDD
			// 
			this->progressBarBDD->Location = System::Drawing::Point(39, 72);
			this->progressBarBDD->Name = L"progressBarBDD";
			this->progressBarBDD->Size = System::Drawing::Size(457, 23);
			this->progressBarBDD->TabIndex = 9;
			// 
			// btnSeConnecter
			// 
			this->btnSeConnecter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSeConnecter->Location = System::Drawing::Point(395, 43);
			this->btnSeConnecter->Name = L"btnSeConnecter";
			this->btnSeConnecter->Size = System::Drawing::Size(103, 23);
			this->btnSeConnecter->TabIndex = 8;
			this->btnSeConnecter->Text = L"Se connecter";
			this->btnSeConnecter->UseVisualStyleBackColor = true;
			this->btnSeConnecter->Click += gcnew System::EventHandler(this, &Interface::btnSeConnecter_Click);
			// 
			// textDatabase
			// 
			this->textDatabase->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textDatabase->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDatabase->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textDatabase->Location = System::Drawing::Point(39, 43);
			this->textDatabase->Name = L"textDatabase";
			this->textDatabase->Size = System::Drawing::Size(350, 22);
			this->textDatabase->TabIndex = 7;
			this->textDatabase->TabStop = false;
			this->textDatabase->Text = L"Entrez le nom de la BDD à laquelle vous souhaitez vous connecter";
			this->textDatabase->Click += gcnew System::EventHandler(this, &Interface::textDatabase_Click);
			// 
			// labelDatabase
			// 
			this->labelDatabase->AutoSize = true;
			this->labelDatabase->Location = System::Drawing::Point(36, 17);
			this->labelDatabase->Name = L"labelDatabase";
			this->labelDatabase->Size = System::Drawing::Size(53, 13);
			this->labelDatabase->TabIndex = 4;
			this->labelDatabase->Text = L"Database";
			// 
			// ModeCringe
			// 
			this->ModeCringe->AutoSize = true;
			this->ModeCringe->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ModeCringe->Location = System::Drawing::Point(39, 210);
			this->ModeCringe->Name = L"ModeCringe";
			this->ModeCringe->Size = System::Drawing::Size(85, 17);
			this->ModeCringe->TabIndex = 3;
			this->ModeCringe->TabStop = true;
			this->ModeCringe->Text = L"Mode Cringe";
			this->ModeCringe->UseVisualStyleBackColor = true;
			this->ModeCringe->CheckedChanged += gcnew System::EventHandler(this, &Interface::ModeCringe_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Thème :";
			// 
			// ModeSombre
			// 
			this->ModeSombre->AutoSize = true;
			this->ModeSombre->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ModeSombre->Location = System::Drawing::Point(39, 187);
			this->ModeSombre->Name = L"ModeSombre";
			this->ModeSombre->Size = System::Drawing::Size(91, 17);
			this->ModeSombre->TabIndex = 1;
			this->ModeSombre->Text = L"Mode Sombre";
			this->ModeSombre->UseVisualStyleBackColor = true;
			this->ModeSombre->CheckedChanged += gcnew System::EventHandler(this, &Interface::ModeSombre_CheckedChanged);
			// 
			// ModeClair
			// 
			this->ModeClair->AutoSize = true;
			this->ModeClair->Checked = true;
			this->ModeClair->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ModeClair->Location = System::Drawing::Point(39, 164);
			this->ModeClair->Name = L"ModeClair";
			this->ModeClair->Size = System::Drawing::Size(75, 17);
			this->ModeClair->TabIndex = 0;
			this->ModeClair->TabStop = true;
			this->ModeClair->Text = L"Mode Clair";
			this->ModeClair->UseVisualStyleBackColor = true;
			this->ModeClair->CheckedChanged += gcnew System::EventHandler(this, &Interface::ModeClair_CheckedChanged);
			// 
			// pnlSwitch
			// 
			this->pnlSwitch->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pnlSwitch->Controls->Add(this->tabControl1);
			this->pnlSwitch->Location = System::Drawing::Point(232, 62);
			this->pnlSwitch->Name = L"pnlSwitch";
			this->pnlSwitch->Size = System::Drawing::Size(934, 593);
			this->pnlSwitch->TabIndex = 8;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Transparent;
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(1120, 10);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(30, 30);
			this->btnExit->TabIndex = 9;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &Interface::btnExit_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Tan;
			this->panel4->Location = System::Drawing::Point(-35, 46);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1428, 10);
			this->panel4->TabIndex = 1;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Tan;
			this->panel12->Location = System::Drawing::Point(224, 56);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(2, 650);
			this->panel12->TabIndex = 11;
			// 
			// labelTable
			// 
			this->labelTable->AutoSize = true;
			this->labelTable->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTable->Location = System::Drawing::Point(234, 15);
			this->labelTable->Name = L"labelTable";
			this->labelTable->Size = System::Drawing::Size(114, 25);
			this->labelTable->TabIndex = 3;
			this->labelTable->Text = L"Table Client";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(947, 19);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(63, 13);
			this->label41->TabIndex = 12;
			this->label41->Text = L"Powered by";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1016, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(104, 38);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// Interface
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1162, 696);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->pnlSwitch);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->labelTable);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Interface";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"btnClient";
			this->Text = L"Waffle Manager";
			this->Load += gcnew System::EventHandler(this, &Interface::Interface_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxCringe))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabClient->ResumeLayout(false);
			this->tabClient->PerformLayout();
			this->pnlDatabase->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
			this->tabCommande->ResumeLayout(false);
			this->tabCommande->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->EndInit();
			this->tabPersonnel->ResumeLayout(false);
			this->tabPersonnel->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->EndInit();
			this->tabStock->ResumeLayout(false);
			this->tabStock->PerformLayout();
			this->panel16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->EndInit();
			this->tabStatistique->ResumeLayout(false);
			this->tabStatistique->PerformLayout();
			this->panel17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStat))->EndInit();
			this->tabApropos->ResumeLayout(false);
			this->tabApropos->PerformLayout();
			this->tabParametres->ResumeLayout(false);
			this->tabParametres->PerformLayout();
			this->pnlSwitch->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	//ouverture de la fenetre d'authentification
	private: System::Void Interface_Load(System::Object^ sender, System::EventArgs^ e) {

		Authentify^ form = gcnew Authentify;
		form->ShowDialog();

	
	}
	//page commande
	private: System::Void btnCommande_Click(System::Object^ sender, System::EventArgs^ e) {

		labelTable->Text = "Table Commande";
		tabControl1->SelectTab(tabCommande);
	}
	//page personnel
	private: System::Void btnPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {

		labelTable->Text = "Table Personnel";
		tabControl1->SelectTab(tabPersonnel);
	}
	//page client
	private: System::Void btnClient_Click(System::Object^ sender, System::EventArgs^ e) {

		labelTable->Text = "Table Client";
		tabControl1->SelectTab(tabClient);

	}
	//page stock
	private: System::Void btnStock_Click(System::Object^ sender, System::EventArgs^ e) {

		labelTable->Text = "Table Stock";
		tabControl1->SelectTab(tabStock);
	}
	private: System::Void btnStatistique_Click(System::Object^ sender, System::EventArgs^ e) {

		labelTable->Text = "Table Statistiques";
		tabControl1->SelectTab(tabStatistique);
	}
	//page parametres
	private: System::Void btnParametres_Click(System::Object^ sender, System::EventArgs^ e) {

		labelTable->Text = "Paramètres";
		tabControl1->SelectTab(tabParametres);
	}
	//page a propos
	private: System::Void btnApropos_Click(System::Object^ sender, System::EventArgs^ e) {

		labelTable->Text = "A propos";
		tabControl1->SelectTab(tabApropos);
	}
	//rick roll
	private: System::Void btnPlusInformation_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Diagnostics::Process::Start("https://www.youtube.com/watch?v=dQw4w9WgXcQ&ab_channel=RickAstley");

	}
	//mode clair
	private: System::Void ModeClair_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxCringe->Hide();
		Interface::BackColor = Color::LightSteelBlue;
		panel1->BackColor = Color::Wheat;
		panel2->BackColor = Color::LightSteelBlue;
		tabClient->BackColor = Color::LightSteelBlue;
		tabParametres->BackColor = Color::LightSteelBlue;
		tabStock->BackColor = Color::LightSteelBlue;
		tabCommande->BackColor = Color::LightSteelBlue;
		tabApropos->BackColor = Color::LightSteelBlue;
		tabStatistique->BackColor = Color::LightSteelBlue;
		tabPersonnel->BackColor = Color::LightSteelBlue;

	}
	//mode somnbre
	private: System::Void ModeSombre_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxCringe->Hide();
		Interface::BackColor = Color::Gray;
		panel1->BackColor = Color::LightGray;
		panel2->BackColor = Color::Gray;
		tabClient->BackColor = Color::Gray;
		tabParametres->BackColor = Color::Gray;
		tabStock->BackColor = Color::Gray;
		tabCommande->BackColor = Color::Gray;
		tabApropos->BackColor = Color::Gray;
		tabStatistique->BackColor = Color::Gray;
		tabPersonnel->BackColor = Color::Gray;
	}
	//mode cringe
	private: System::Void ModeCringe_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxCringe->Show();
		Interface::BackColor = Color::Fuchsia;
		panel1->BackColor = Color::Lime;
		panel2->BackColor = Color::Fuchsia;
		tabClient->BackColor = Color::Fuchsia;
		tabParametres->BackColor = Color::Fuchsia;
		tabStock->BackColor = Color::Fuchsia;
		tabCommande->BackColor = Color::Fuchsia;
		tabApropos->BackColor = Color::Fuchsia;
		tabStatistique->BackColor = Color::Fuchsia;
		tabPersonnel->BackColor = Color::Fuchsia;
	}
	//Créer client
	private: System::Void btnClientCréer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		dateNaissance->Enabled = true;
		datePremierAchat->Enabled = true;
		boxIDClient->Enabled = false;
		boxIDClient->Text = "Impossible de créer un ID";
		boxIDClient->Cursor = Cursors::No;

	}
	//modifier client
	private: System::Void btnClientModifier_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		dateNaissance->Enabled = true;
		datePremierAchat->Enabled = true;
		boxIDClient->Enabled = false;
		boxIDClient->Text = "Impossible de modifier un ID";
		boxIDClient->Cursor = Cursors::Arrow;
	}
	//supprimer client
	private: System::Void btnClientSupprimer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		dateNaissance->Enabled = false;
		datePremierAchat->Enabled = false;
		boxIDClient->Enabled = true;
		boxIDClient->Text = "";
		boxIDClient->Cursor = Cursors::Arrow;
	}
	//afficher client
	private: System::Void btnClientAfficher_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		dateNaissance->Enabled = false;
		datePremierAchat->Enabled = false;
		boxIDClient->Enabled = true;
		boxIDClient->Text = "";
		boxIDClient->Cursor = Cursors::Arrow;
	}

	//Bouton Executer Client
	private: System::Void btnExecuter_Click(System::Object^ sender, System::EventArgs^ e) {

		//Barre de chargement
		label13->Text = "";
		progressBar1->Value = 15;
		progressBar1->Value = 30;
		progressBar1->Value = 60;
		progressBar1->Value = 100;
		label13->Text = "Opération effectuée avec succès";
	}
	//créer commande
	private: System::Void btnCommandeCréer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		dateEnvoie->Enabled = true;
		dateLivraison->Enabled = true;
		boxIDCommande->Enabled = false;
		boxIDCommande->Text = "Impossible de créer un ID";
		boxIDCommande->Cursor = Cursors::No;
	}
	//modifier commande
	private: System::Void btnCommandeModifier_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

		dateEnvoie->Enabled = true;
		dateLivraison->Enabled = true;
		boxIDCommande->Enabled = false;
		boxIDCommande->Text = "Impossible de modifier un ID";
		boxIDCommande->Cursor = Cursors::No;
	}
	//supprimer commande
	private: System::Void btnCommandeSupprimer_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

		dateEnvoie->Enabled = false;
		dateLivraison->Enabled = false;
		boxIDCommande->Enabled = true;
		boxIDCommande->Text = "";
		boxIDCommande->Cursor = Cursors::No;

	}
	//afficher commande
	private: System::Void btnCommandeAfficher_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

		dateEnvoie->Enabled = false;
		dateLivraison->Enabled = false;
		boxIDCommande->Enabled = true;
		boxIDCommande->Text = "";
		boxIDCommande->Cursor = Cursors::No;

	}
	//Boutton Executer Commande 
	private: System::Void btnExecuterCommande_Click(System::Object^ sender, System::EventArgs^ e) {

		//Barre de chargement
		label14->Text = "";
		progressBarCommande->Value = 15;
		progressBarCommande->Value = 30;
		progressBarCommande->Value = 60;
		progressBarCommande->Value = 100;
		label14->Text = "Opération effectuée avec succès";
	}
	//choix database
	private: System::Void textDatabase_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textDatabase->Text == "Entrez le nom de la BDD à laquelle vous souhaitez vous connecter") {

			textDatabase->Text = "";
			textDatabase->ForeColor = Color::Black;
		}
	}
	//connextion database
	private: System::Void btnSeConnecter_Click(System::Object^ sender, System::EventArgs^ e) {

		labelBDD->Text = "";
		progressBarBDD->Value = 15;
		progressBarBDD->Value = 30;
		progressBarBDD->Value = 60;
		progressBarBDD->Value = 100;
		labelBDD->Text = "Etat : Connexion établie avec succès";
	}
	//executer opération personnel
	private: System::Void btnExecuterPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {

		label16->Text = "";
		progressBarPersonnel->Value = 15;
		progressBarPersonnel->Value = 30;
		progressBarPersonnel->Value = 60;
		progressBarPersonnel->Value = 100;
		label16->Text = "Opération effectuée avec succès";
	}
	//créer un personnel
	private: System::Void btnCréerPersonnel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDPersonnel->Enabled = false;
		boxIDPersonnel->Text = "Impossible de créer un ID";

	}
	//modifier un personnel
	private: System::Void btnModifierPersonnel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDPersonnel->Enabled = false;
		boxIDPersonnel->Text = "Impossible de modifier un ID";

	}
	//supprimer un personnel
	private: System::Void btnSupprimerPersonnel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDPersonnel->Enabled = true;
		boxIDPersonnel->Text = "";

	}
	//afficher un personnel
	private: System::Void btnAfficherPersonnel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDPersonnel->Enabled = true;
		boxIDPersonnel->Text = "";
	}
	//quitter l'application
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

		exit(2);

	}
	//executer opération stock
	private: System::Void btnExecuterStock_Click(System::Object^ sender, System::EventArgs^ e) {

		label23->Text = "";
		progressBarStock->Value = 15;
		progressBarStock->Value = 30;
		progressBarStock->Value = 60;
		progressBarStock->Value = 100;
		label23->Text = "Opération effectuée avec succès";
	}

	private: System::Void btnCreerStat_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDStat->Enabled = false;
		boxIDStat->Text = "Impossible de créer un ID";
	}
	private: System::Void btnModifierStat_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDStat->Enabled = false;
		boxIDStat->Text = "Impossible de modifier un ID";
	}
	private: System::Void btnSupprimerStat_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDStat->Enabled = true;
		boxIDStat->Text = "";
	}
	private: System::Void btnAfficherStat_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDStat->Enabled = true;
		boxIDStat->Text = "";
	}
	private: System::Void btnCreerStock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDStock->Enabled = false;
		boxIDStock->Text = "Impossible de créer un ID";

	}
	private: System::Void btnModifierStock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDStock->Enabled = false;
		boxIDStock->Text = "Impossible de modifier un ID";
	}
	private: System::Void btnSupprimerStock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		boxIDStock->Enabled = true;
		boxIDStock->Text = "";
	}
	
	};
}