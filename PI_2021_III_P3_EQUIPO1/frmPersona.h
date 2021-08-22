#pragma once
#include <fstream>
#include "frmListaPersona.h"
#include "frmCliente.h"
#include "Persona.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <msclr/marshal_cppstd.h>



namespace PI2021IIIP3EQUIPO1 {
	using namespace msclr::interop; /// nuevos using namespace
	using namespace std; ////
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPersona
	/// </summary>
	public ref class frmPersona : public System::Windows::Forms::Form
	{
	public:
		frmPersona(void)
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
		~frmPersona()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ lblPrimerNombre;
	private: System::Windows::Forms::TextBox^ txtPrimerNombre;
	private: System::Windows::Forms::Label^ lblApellidoPaterno;
	private: System::Windows::Forms::TextBox^ txtApellidoPaterno;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ lblIDpersona;

	private: System::Windows::Forms::TextBox^ txtIDPersona;

	private: System::Windows::Forms::PictureBox^ pictureBox4;


	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ lblEdad;
	private: System::Windows::Forms::TextBox^ txtEdad;
	private: System::Windows::Forms::Label^ lblGeneroPersona;







	private: System::Windows::Forms::Label^ lblIdentificacion;


	private: System::Windows::Forms::TextBox^ txtIdentificacion;
	private: System::Windows::Forms::Label^ lblTelefonoPersona;
	private: System::Windows::Forms::TextBox^ txtTelefonoPersona;




	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ lblRegistroPersona;
	private: System::Windows::Forms::Button^ btnRegistrarPersona;
	private: System::Windows::Forms::Button^ btnMostrarPersona;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::ComboBox^ cboGeneroPersona;
	private: System::Windows::Forms::Label^ lblCategoriaPersona;
	private: System::Windows::Forms::TextBox^ txtCategoriaPersona;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ lblTipoPersona;
	private: System::Windows::Forms::ComboBox^ cboTipoPersona;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPersona::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblPrimerNombre = (gcnew System::Windows::Forms::Label());
			this->txtPrimerNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblApellidoPaterno = (gcnew System::Windows::Forms::Label());
			this->txtApellidoPaterno = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->lblIDpersona = (gcnew System::Windows::Forms::Label());
			this->txtIDPersona = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->lblEdad = (gcnew System::Windows::Forms::Label());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->lblGeneroPersona = (gcnew System::Windows::Forms::Label());
			this->lblIdentificacion = (gcnew System::Windows::Forms::Label());
			this->txtIdentificacion = (gcnew System::Windows::Forms::TextBox());
			this->lblTelefonoPersona = (gcnew System::Windows::Forms::Label());
			this->txtTelefonoPersona = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->lblRegistroPersona = (gcnew System::Windows::Forms::Label());
			this->btnRegistrarPersona = (gcnew System::Windows::Forms::Button());
			this->btnMostrarPersona = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->cboGeneroPersona = (gcnew System::Windows::Forms::ComboBox());
			this->lblCategoriaPersona = (gcnew System::Windows::Forms::Label());
			this->txtCategoriaPersona = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->lblTipoPersona = (gcnew System::Windows::Forms::Label());
			this->cboTipoPersona = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(86, 191);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(39, 36);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(86, 230);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(39, 38);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// lblPrimerNombre
			// 
			this->lblPrimerNombre->AutoSize = true;
			this->lblPrimerNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrimerNombre->Location = System::Drawing::Point(189, 191);
			this->lblPrimerNombre->Name = L"lblPrimerNombre";
			this->lblPrimerNombre->Size = System::Drawing::Size(58, 13);
			this->lblPrimerNombre->TabIndex = 2;
			this->lblPrimerNombre->Text = L"Nombre: ";
			// 
			// txtPrimerNombre
			// 
			this->txtPrimerNombre->Location = System::Drawing::Point(251, 191);
			this->txtPrimerNombre->Name = L"txtPrimerNombre";
			this->txtPrimerNombre->Size = System::Drawing::Size(121, 20);
			this->txtPrimerNombre->TabIndex = 3;
			// 
			// lblApellidoPaterno
			// 
			this->lblApellidoPaterno->AutoSize = true;
			this->lblApellidoPaterno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblApellidoPaterno->Location = System::Drawing::Point(187, 229);
			this->lblApellidoPaterno->Name = L"lblApellidoPaterno";
			this->lblApellidoPaterno->Size = System::Drawing::Size(60, 13);
			this->lblApellidoPaterno->TabIndex = 4;
			this->lblApellidoPaterno->Text = L"Apellido: ";
			// 
			// txtApellidoPaterno
			// 
			this->txtApellidoPaterno->Location = System::Drawing::Point(251, 229);
			this->txtApellidoPaterno->Name = L"txtApellidoPaterno";
			this->txtApellidoPaterno->Size = System::Drawing::Size(121, 20);
			this->txtApellidoPaterno->TabIndex = 5;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(86, 143);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(39, 42);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// lblIDpersona
			// 
			this->lblIDpersona->AutoSize = true;
			this->lblIDpersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDpersona->Location = System::Drawing::Point(145, 150);
			this->lblIDpersona->Name = L"lblIDpersona";
			this->lblIDpersona->Size = System::Drawing::Size(98, 13);
			this->lblIDpersona->TabIndex = 7;
			this->lblIDpersona->Text = L"No. ID Persona:";
			// 
			// txtIDPersona
			// 
			this->txtIDPersona->Location = System::Drawing::Point(251, 150);
			this->txtIDPersona->Name = L"txtIDPersona";
			this->txtIDPersona->Size = System::Drawing::Size(121, 20);
			this->txtIDPersona->TabIndex = 8;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(86, 274);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(39, 38);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(86, 362);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(39, 39);
			this->pictureBox7->TabIndex = 12;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(86, 407);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(39, 39);
			this->pictureBox8->TabIndex = 13;
			this->pictureBox8->TabStop = false;
			// 
			// lblEdad
			// 
			this->lblEdad->AutoSize = true;
			this->lblEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEdad->Location = System::Drawing::Point(203, 276);
			this->lblEdad->Name = L"lblEdad";
			this->lblEdad->Size = System::Drawing::Size(44, 13);
			this->lblEdad->TabIndex = 14;
			this->lblEdad->Text = L"Edad: ";
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(251, 276);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(121, 20);
			this->txtEdad->TabIndex = 15;
			// 
			// lblGeneroPersona
			// 
			this->lblGeneroPersona->AutoSize = true;
			this->lblGeneroPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGeneroPersona->Location = System::Drawing::Point(189, 318);
			this->lblGeneroPersona->Name = L"lblGeneroPersona";
			this->lblGeneroPersona->Size = System::Drawing::Size(52, 13);
			this->lblGeneroPersona->TabIndex = 18;
			this->lblGeneroPersona->Text = L"Genero:";
			// 
			// lblIdentificacion
			// 
			this->lblIdentificacion->AutoSize = true;
			this->lblIdentificacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIdentificacion->Location = System::Drawing::Point(155, 366);
			this->lblIdentificacion->Name = L"lblIdentificacion";
			this->lblIdentificacion->Size = System::Drawing::Size(92, 13);
			this->lblIdentificacion->TabIndex = 20;
			this->lblIdentificacion->Text = L"Identificacion: ";
			// 
			// txtIdentificacion
			// 
			this->txtIdentificacion->Location = System::Drawing::Point(251, 366);
			this->txtIdentificacion->Name = L"txtIdentificacion";
			this->txtIdentificacion->Size = System::Drawing::Size(121, 20);
			this->txtIdentificacion->TabIndex = 21;
			// 
			// lblTelefonoPersona
			// 
			this->lblTelefonoPersona->AutoSize = true;
			this->lblTelefonoPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTelefonoPersona->Location = System::Drawing::Point(125, 411);
			this->lblTelefonoPersona->Name = L"lblTelefonoPersona";
			this->lblTelefonoPersona->Size = System::Drawing::Size(122, 13);
			this->lblTelefonoPersona->TabIndex = 22;
			this->lblTelefonoPersona->Text = L"Numero de telefono:";
			// 
			// txtTelefonoPersona
			// 
			this->txtTelefonoPersona->Location = System::Drawing::Point(251, 410);
			this->txtTelefonoPersona->Name = L"txtTelefonoPersona";
			this->txtTelefonoPersona->Size = System::Drawing::Size(121, 20);
			this->txtTelefonoPersona->TabIndex = 23;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(378, 327);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(293, 277);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 24;
			this->pictureBox9->TabStop = false;
			// 
			// lblRegistroPersona
			// 
			this->lblRegistroPersona->AutoSize = true;
			this->lblRegistroPersona->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegistroPersona->Location = System::Drawing::Point(200, 32);
			this->lblRegistroPersona->Name = L"lblRegistroPersona";
			this->lblRegistroPersona->Size = System::Drawing::Size(304, 36);
			this->lblRegistroPersona->TabIndex = 25;
			this->lblRegistroPersona->Text = L"Registro De Personas";
			// 
			// btnRegistrarPersona
			// 
			this->btnRegistrarPersona->BackColor = System::Drawing::Color::Moccasin;
			this->btnRegistrarPersona->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRegistrarPersona->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrarPersona->FlatAppearance->BorderSize = 2;
			this->btnRegistrarPersona->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrarPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnRegistrarPersona->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegistrarPersona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrarPersona.Image")));
			this->btnRegistrarPersona->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegistrarPersona->Location = System::Drawing::Point(468, 216);
			this->btnRegistrarPersona->Name = L"btnRegistrarPersona";
			this->btnRegistrarPersona->Size = System::Drawing::Size(145, 45);
			this->btnRegistrarPersona->TabIndex = 26;
			this->btnRegistrarPersona->Text = L"Registrar";
			this->btnRegistrarPersona->UseVisualStyleBackColor = false;
			this->btnRegistrarPersona->Click += gcnew System::EventHandler(this, &frmPersona::btnRegistrarPersona_Click);
			// 
			// btnMostrarPersona
			// 
			this->btnMostrarPersona->BackColor = System::Drawing::Color::Moccasin;
			this->btnMostrarPersona->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMostrarPersona->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrarPersona->FlatAppearance->BorderSize = 2;
			this->btnMostrarPersona->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrarPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarPersona->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMostrarPersona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrarPersona.Image")));
			this->btnMostrarPersona->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrarPersona->Location = System::Drawing::Point(468, 276);
			this->btnMostrarPersona->Name = L"btnMostrarPersona";
			this->btnMostrarPersona->Size = System::Drawing::Size(145, 45);
			this->btnMostrarPersona->TabIndex = 27;
			this->btnMostrarPersona->Text = L"Mostrar";
			this->btnMostrarPersona->UseVisualStyleBackColor = false;
			this->btnMostrarPersona->Click += gcnew System::EventHandler(this, &frmPersona::btnMostrarPersona_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(86, 318);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(39, 38);
			this->pictureBox5->TabIndex = 28;
			this->pictureBox5->TabStop = false;
			// 
			// cboGeneroPersona
			// 
			this->cboGeneroPersona->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cboGeneroPersona->FormattingEnabled = true;
			this->cboGeneroPersona->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Femenino", L"Masculino" });
			this->cboGeneroPersona->Location = System::Drawing::Point(251, 318);
			this->cboGeneroPersona->Name = L"cboGeneroPersona";
			this->cboGeneroPersona->Size = System::Drawing::Size(121, 21);
			this->cboGeneroPersona->TabIndex = 29;
			// 
			// lblCategoriaPersona
			// 
			this->lblCategoriaPersona->AutoSize = true;
			this->lblCategoriaPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCategoriaPersona->Location = System::Drawing::Point(178, 451);
			this->lblCategoriaPersona->Name = L"lblCategoriaPersona";
			this->lblCategoriaPersona->Size = System::Drawing::Size(69, 13);
			this->lblCategoriaPersona->TabIndex = 30;
			this->lblCategoriaPersona->Text = L"Categoria: ";
			// 
			// txtCategoriaPersona
			// 
			this->txtCategoriaPersona->Location = System::Drawing::Point(251, 451);
			this->txtCategoriaPersona->Name = L"txtCategoriaPersona";
			this->txtCategoriaPersona->Size = System::Drawing::Size(121, 20);
			this->txtCategoriaPersona->TabIndex = 31;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(86, 451);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(41, 42);
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			// 
			// lblTipoPersona
			// 
			this->lblTipoPersona->AutoSize = true;
			this->lblTipoPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTipoPersona->Location = System::Drawing::Point(436, 153);
			this->lblTipoPersona->Name = L"lblTipoPersona";
			this->lblTipoPersona->Size = System::Drawing::Size(40, 13);
			this->lblTipoPersona->TabIndex = 33;
			this->lblTipoPersona->Text = L"Tipo: ";
			// 
			// cboTipoPersona
			// 
			this->cboTipoPersona->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cboTipoPersona->FormattingEnabled = true;
			this->cboTipoPersona->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cliente", L"Empleado" });
			this->cboTipoPersona->Location = System::Drawing::Point(482, 149);
			this->cboTipoPersona->Name = L"cboTipoPersona";
			this->cboTipoPersona->Size = System::Drawing::Size(121, 21);
			this->cboTipoPersona->TabIndex = 34;
			// 
			// frmPersona
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(683, 601);
			this->Controls->Add(this->cboTipoPersona);
			this->Controls->Add(this->lblTipoPersona);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->txtCategoriaPersona);
			this->Controls->Add(this->lblCategoriaPersona);
			this->Controls->Add(this->cboGeneroPersona);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->btnMostrarPersona);
			this->Controls->Add(this->btnRegistrarPersona);
			this->Controls->Add(this->lblRegistroPersona);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->txtTelefonoPersona);
			this->Controls->Add(this->lblTelefonoPersona);
			this->Controls->Add(this->txtIdentificacion);
			this->Controls->Add(this->lblIdentificacion);
			this->Controls->Add(this->lblGeneroPersona);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->lblEdad);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->txtIDPersona);
			this->Controls->Add(this->lblIDpersona);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->txtApellidoPaterno);
			this->Controls->Add(this->lblApellidoPaterno);
			this->Controls->Add(this->txtPrimerNombre);
			this->Controls->Add(this->lblPrimerNombre);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmPersona";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Persona";
			this->Load += gcnew System::EventHandler(this, &frmPersona::frmPersona_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMostrarPersona_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			frmListaPersona^ listaPersona = gcnew frmListaPersona;
			listaPersona->Show();
			ifstream archivoPersonaEntrada;
			archivoPersonaEntrada.open("Personas.dat", ios::binary | ios::app | ios::in);
			if (!archivoPersonaEntrada)
			{
				this->Close();
				throw gcnew Exception("No se pudo abrir el archivo.");
			}
			Persona leerPersona;
			archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
			while (!archivoPersonaEntrada.eof())
			{
				System::String^ nombre1 = marshal_as<System::String^>(leerPersona.obtenerPrimerNombre());
				System::String^ apellido1 = marshal_as<System::String^>(leerPersona.obtenerApellidoPaterno());
				System::String^ identificacion1 = marshal_as<System::String^>(leerPersona.obtenerIdentificacion());
				System::String^ tipo1 = marshal_as<System::String^>(leerPersona.obtenerTipoPersona());
				System::String^ genero1 = marshal_as<System::String^>(leerPersona.obtenerGenero());

				std::string id = to_string(leerPersona.obtenerID());
				std::string ed = to_string(leerPersona.obtenerEdad());
				std::string tel = to_string(leerPersona.obtenerTelefono());

				System::String^ ID1 = marshal_as<System::String^>(id);
				System::String^ edad1 = marshal_as<System::String^>(ed);
				System::String^ telefono1 = marshal_as<System::String^>(tel);

				listaPersona->dgvListaPersona->Rows->Add(ID1, nombre1, apellido1, genero1, edad1, identificacion1, telefono1, tipo1);
				archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
			}

		}
		catch (Exception^ excep)
		{
			MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void btnRegistrarPersona_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream archivoPersonaSalida("Personas.dat", ios::binary | ios::app | ios::out);
		if (!archivoPersonaSalida)
		{
			throw gcnew Exception("No se pudo abrir el archivo.");
		}
		ifstream archivoPersonaEntrada("Personas.dat", ios::binary | ios::app | ios::in);
		if (!archivoPersonaEntrada)
		{
			throw gcnew Exception("No se pudo abrir el archivo.");
		}
		//ID persona
		if (txtIDPersona->Text == "")
		{
			throw gcnew Exception("Ingrese el ID.");
		}
		int ID = Convert::ToInt32(txtIDPersona->Text);
		Persona leerPersona;
		archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
		while (!archivoPersonaEntrada.eof())
		{
			int id = leerPersona.obtenerID();
			if (ID != id)
			{
				archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
			}
			else
			{
				throw gcnew Exception("El ID ya esta en uso.");
			}

		}
		if (ID <= 0)
		{
			throw gcnew Exception("El ID tiene que ser positivo y mayor a 0.");
		}
		else if (ID > 100)
		{
			throw gcnew Exception("El ID no puede ser un numero grande.");
		}
		//Nombre
		System::String^ nombre = txtPrimerNombre->Text;
		int lonNom = txtPrimerNombre->Text->Length;
		if (nombre == "")
		{
			throw gcnew Exception("Ingrese el nombre.");
		}
		else if (lonNom < 3)
		{
			throw gcnew Exception("El nombre es muy corto.");
		}
		//Apellido
		System::String^ apellido = txtApellidoPaterno->Text;
		int lonApel = txtApellidoPaterno->Text->Length;
		if (apellido == "")
		{
			throw gcnew Exception("Ingrese el apellido.");
		}
		else if (lonApel < 3)
		{
			throw gcnew Exception("El apellido es muy corto.");
		}
		//Edad
		if (txtEdad->Text == "")
		{
			throw gcnew Exception("Ingrese la edad.");
		}
		int edad = Convert::ToInt16(txtEdad->Text);
		if (edad < 0)
		{
			throw gcnew Exception("La edad tiene que ser positiva y mayor que 0.");
		}
		else if (edad <= 10)
		{
			throw gcnew Exception("Debe tener mas de 10 años para poder registrarse.");
		}
		else if (edad > 100)
		{
			throw gcnew Exception("Ingrese una edad valida(menor a 100).");
		}
		//Genero
		if (cboGeneroPersona->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione el tipo de genero.");
		}
		else if ((cboGeneroPersona->SelectedItem->ToString() != "Masculino") && (cboGeneroPersona->SelectedItem->ToString() != "Femenino"))
		{
			throw gcnew Exception("Seleccione el genero valido.");
		}
		System::String^ genero = cboGeneroPersona->SelectedItem->ToString();

		//Identificacion
		System::String^ identificacion = txtIdentificacion->Text;
		int lonIden = txtIdentificacion->Text->Length;
		if (identificacion == "")
		{
			throw gcnew Exception("Ingrese la identificacion.");
		}
		else if (lonIden > 13)
		{
			throw gcnew Exception("La identificacion es demasiado grande.");
		}
		else if (lonIden < 13)
		{
			throw gcnew Exception("La identificacion es demasiado corta.");

		}
		//Telefono
		if (txtTelefonoPersona->Text=="")
		{
			throw gcnew Exception("Ingrese el numero de telefono.");
		}
		else if (txtTelefonoPersona->Text->Length < 8)
		{
			throw gcnew Exception("El numero de telefono es demasiado corto.");
		}
		else if (txtTelefonoPersona->Text->Length > 8)
		{
			throw gcnew Exception("El numero de telefono es demasiado grande.");
		}
		int telefono = Convert::ToInt32(txtTelefonoPersona->Text);
		if (telefono < 0)
		{
			throw gcnew Exception("El numero de telefono no es valido.");
		}
		//Categoria
		System::String^ categoria = txtCategoriaPersona->Text;
		if (categoria == "")
		{
			throw gcnew Exception("ingrese la categoria.");
		}
		//Tipo de persona
		if (cboTipoPersona->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione el tipo de persona.");
		}
		else if ((cboTipoPersona->SelectedItem->ToString() == "Cliente") && (cboTipoPersona->SelectedItem->ToString() == "Empleado"))
		{
			throw gcnew Exception("El tipo de persona seleccionado no esta en la lista.");

		}
		System::String^ tipo = cboTipoPersona->Text->ToString();

		//convertir los string
		std::string nombreP = marshal_as<std::string>(nombre);
		std::string apellidoP = marshal_as<std::string>(apellido);
		std::string generoP = marshal_as<std::string>(genero);
		std::string identificacionP = marshal_as<std::string>(identificacion);
		std::string categoriaP = marshal_as<std::string>(categoria);
		std::string tipoP = marshal_as<std::string>(tipo);
		Persona persona(nombreP, apellidoP, identificacionP, tipoP, generoP, telefono, edad, ID);
		//Guardar en archivo
		archivoPersonaSalida.write(reinterpret_cast<const char*>(&persona), sizeof(Persona));
		archivoPersonaSalida.close();
		//////////////////
		txtPrimerNombre->Text = "";
		txtApellidoPaterno->Text = "";
		txtCategoriaPersona->Text = "";
		txtIdentificacion->Text = "";
		txtCategoriaPersona->Text = "";
		txtEdad->Text = "";
		txtIDPersona->Text = "";
		txtTelefonoPersona->Text = "";
		cboGeneroPersona->Text = "";
		cboTipoPersona->Text = "";
	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void frmPersona_Load(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream archivoPersona("Personas.dat", ios::binary | ios::app | ios::out);
		if (!archivoPersona)
		{
			throw gcnew Exception("No se pudo abrir el archivo");
		}

	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
