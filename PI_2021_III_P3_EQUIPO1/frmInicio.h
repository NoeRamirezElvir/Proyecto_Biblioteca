#pragma once
#include "frmBiblioteca.h"
#include "Usuario.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include "frmInicio.h"

using namespace msclr::interop;

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmInicio
	/// </summary>
	public ref class frmInicio : public System::Windows::Forms::Form
	{
	public:
		frmInicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::TextBox^ txtContraseña;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblUsuario;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ btnLogin;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmInicio::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(234, 175);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 35);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(234, 234);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 33);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(272, 190);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(156, 20);
			this->txtUsuario->TabIndex = 1;
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(272, 247);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(156, 20);
			this->txtContraseña->TabIndex = 2;
			this->txtContraseña->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(230, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"LA CASA DEL LECTOR";
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->BackColor = System::Drawing::Color::Transparent;
			this->lblUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsuario->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblUsuario->Location = System::Drawing::Point(272, 172);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(57, 15);
			this->lblUsuario->TabIndex = 4;
			this->lblUsuario->Text = L"Usuario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(272, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Contraseña";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(294, 21);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 84);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnLogin->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogin.Image")));
			this->btnLogin->Location = System::Drawing::Point(294, 313);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(118, 47);
			this->btnLogin->TabIndex = 7;
			this->btnLogin->Text = L"LOGIN";
			this->btnLogin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &frmInicio::btnLogin_Click);
			// 
			// frmInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(680, 416);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblUsuario);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmInicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ nombre = txtUsuario->Text;
	System::String^ contraseña = txtContraseña->Text;
	std::string nombreS = marshal_as<std::string>(nombre);
	std::string contraseñaS = marshal_as<std::string>(contraseña);
	bool condicion, acceso = false;
	int i = 0;
	Usuario usuario1("Noe", "1234");
	Usuario usuario2("Ricoy", "1234");
	Usuario usuario3("Paola", "1234");
	Usuario usuario4("Franklin", "1234");
	Usuario usuario[4];
	usuario[0] = usuario1;
	usuario[1] = usuario2;
	usuario[2] = usuario3;
	usuario[3] = usuario4;

	for (int i = 0; i < 4; i++)
	{
		condicion = usuario[i].darAcceso(nombreS, contraseñaS);

		if (condicion == true)
		{
			acceso = true;
			i = 5;

		}
		else
		{
			acceso = false;
			txtUsuario->Focus();
			txtUsuario->Text = "";
			txtContraseña->Text = "";
		}
	}
	if (acceso == true)
	{
		//this->Visible = false; //Para cerrar la ventana de inicio
		frmBiblioteca^ biblioteca = gcnew frmBiblioteca;
		biblioteca->Show(); //abrir la ventana de Biblioteca.
		frmInicio^ formulario = gcnew frmInicio;
		formulario->Hide();
		biblioteca->lblsaludo->Text = "Bienvenido(a) " + nombre;
	}
	else
	{
		MessageBox::Show("Nombre de usuario o contraseña incorrectos", "Error en el inicio de sesion", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
