#pragma once
#include <stdlib.h>

namespace PROJETDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Authentify
	/// </summary>
	public ref class Authentify : public System::Windows::Forms::Form
	{
	public:
		Authentify(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Authentify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ boxUsername;
	private: System::Windows::Forms::TextBox^ boxPassword;
	private: System::Windows::Forms::Button^ btnSeConnecter;
	private: System::Windows::Forms::Label^ labelConnexion;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::CheckBox^ checkCGU;
	private: System::Windows::Forms::Label^ labelCGU;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label41;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Authentify::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->boxUsername = (gcnew System::Windows::Forms::TextBox());
			this->boxPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnSeConnecter = (gcnew System::Windows::Forms::Button());
			this->labelConnexion = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->checkCGU = (gcnew System::Windows::Forms::CheckBox());
			this->labelCGU = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(270, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// boxUsername
			// 
			this->boxUsername->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxUsername->ForeColor = System::Drawing::Color::DarkGray;
			this->boxUsername->Location = System::Drawing::Point(73, 167);
			this->boxUsername->Name = L"boxUsername";
			this->boxUsername->Size = System::Drawing::Size(196, 29);
			this->boxUsername->TabIndex = 1;
			this->boxUsername->Text = L"Entrez le nom d\'utilisateur";
			this->boxUsername->Click += gcnew System::EventHandler(this, &Authentify::boxUsername_Click);
			// 
			// boxPassword
			// 
			this->boxPassword->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxPassword->ForeColor = System::Drawing::Color::DarkGray;
			this->boxPassword->Location = System::Drawing::Point(73, 215);
			this->boxPassword->Name = L"boxPassword";
			this->boxPassword->Size = System::Drawing::Size(196, 29);
			this->boxPassword->TabIndex = 1;
			this->boxPassword->Text = L"Mot de passe";
			this->boxPassword->UseSystemPasswordChar = true;
			this->boxPassword->Click += gcnew System::EventHandler(this, &Authentify::boxPassword_Click_1);
			// 
			// btnSeConnecter
			// 
			this->btnSeConnecter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSeConnecter->Location = System::Drawing::Point(109, 326);
			this->btnSeConnecter->Name = L"btnSeConnecter";
			this->btnSeConnecter->Size = System::Drawing::Size(117, 32);
			this->btnSeConnecter->TabIndex = 2;
			this->btnSeConnecter->Text = L"Se connecter";
			this->btnSeConnecter->UseVisualStyleBackColor = true;
			this->btnSeConnecter->Click += gcnew System::EventHandler(this, &Authentify::btnSeConnecter_Click_1);
			// 
			// labelConnexion
			// 
			this->labelConnexion->AutoSize = true;
			this->labelConnexion->ForeColor = System::Drawing::Color::Red;
			this->labelConnexion->Location = System::Drawing::Point(65, 247);
			this->labelConnexion->Name = L"labelConnexion";
			this->labelConnexion->Size = System::Drawing::Size(0, 13);
			this->labelConnexion->TabIndex = 3;
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
			this->btnExit->Location = System::Drawing::Point(319, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(30, 30);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &Authentify::btnExit_Click);
			// 
			// checkCGU
			// 
			this->checkCGU->AutoSize = true;
			this->checkCGU->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkCGU->Location = System::Drawing::Point(55, 272);
			this->checkCGU->Name = L"checkCGU";
			this->checkCGU->Size = System::Drawing::Size(239, 17);
			this->checkCGU->TabIndex = 5;
			this->checkCGU->Text = L"J\'accèpte les termes et conditions d\'utilisation";
			this->checkCGU->UseVisualStyleBackColor = true;
			// 
			// labelCGU
			// 
			this->labelCGU->AutoSize = true;
			this->labelCGU->ForeColor = System::Drawing::Color::Red;
			this->labelCGU->Location = System::Drawing::Point(85, 292);
			this->labelCGU->Name = L"labelCGU";
			this->labelCGU->Size = System::Drawing::Size(0, 13);
			this->labelCGU->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nom d\'utilisateur :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 199);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Mot de passe :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(265, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Leader mondial de la gestion de base de données";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Tan;
			this->panel1->Location = System::Drawing::Point(99, 93);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(150, 2);
			this->panel1->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(151, 370);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(104, 38);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(82, 385);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(63, 13);
			this->label41->TabIndex = 14;
			this->label41->Text = L"Powered by";
			// 
			// Authentify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(352, 426);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkCGU);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->labelCGU);
			this->Controls->Add(this->labelConnexion);
			this->Controls->Add(this->btnSeConnecter);
			this->Controls->Add(this->boxPassword);
			this->Controls->Add(this->boxUsername);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Authentify";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authentify";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	//text box username
	private: System::Void boxUsername_Click(System::Object^ sender, System::EventArgs^ e) {

		if (boxUsername->Text == "Entrez le nom d'utilisateur") {

			boxUsername->Text = "";
			boxUsername->ForeColor = Color::Black;
		}
	}
	//text box password
	private: System::Void boxPassword_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		if (boxPassword->Text == "Mot de passe") {

			boxPassword->Text = "";
			boxPassword->ForeColor = Color::Black;

		}
	}
	//quitter l'appli
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

		exit(1);

	}
	//bouton se connecter
	private: System::Void btnSeConnecter_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (boxUsername->Text == "username" & boxPassword->Text == "password" & checkCGU->Checked == true) {

			Authentify::Close();

		}
		if (boxUsername->Text == "username" & boxPassword->Text == "password" & checkCGU->Checked == false) {

			labelCGU->Text = "Veuillez accepter les termes et CGU";
			labelConnexion->Text = "";
		}
		else {
			labelConnexion->Text = "Nom d'utilisateur ou mot de passe incorrecte";
			labelCGU->Text = "";
		}
	}
};
}
