#pragma once
#include "frmListaCliente.h"
#include "Cliente.h"
#include "Persona.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <msclr/marshal_cppstd.h>

namespace PI2021IIIP3EQUIPO1 {
	using namespace msclr::interop;
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmCliente
	/// </summary>
	public ref class frmCliente : public System::Windows::Forms::Form
	{
	public:
		frmCliente(void)
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
		~frmCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblRegistroCliente;
	private: System::Windows::Forms::ComboBox^ cboPersonas;

	private:

	private: System::Windows::Forms::Label^ lblSeleccionPersona;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ txtIDCliente;

	private: System::Windows::Forms::TextBox^ txtSaldo;



	private: System::Windows::Forms::ComboBox^ cboMembresia;




	private: System::Windows::Forms::ComboBox^ cboAñoIngreso;
	private: System::Windows::Forms::TextBox^ txtOcupacion;
	private: System::Windows::Forms::Button^ btnRegistrarCliente;
	private: System::Windows::Forms::Button^ btnMostrarCliente;





	private: System::Windows::Forms::Label^ lblNom;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblApel;
	private: System::Windows::Forms::Label^ lblApellido;
	private: System::Windows::Forms::Label^ lblIDcliente;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ lblAñoIngreso;
	private: System::Windows::Forms::Label^ lblCorreoCliente;

	private: System::Windows::Forms::Label^ lblMembresia;

	private: System::Windows::Forms::Label^ lblOcupacion;
	private: System::Windows::Forms::Label^ lblSaldo;
	private: System::Windows::Forms::Label^ lblDireccionCliente;
	private: System::Windows::Forms::TextBox^ txtDireccionCliente;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::TextBox^ txtCorreoCliente;







	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCliente::typeid));
			this->lblRegistroCliente = (gcnew System::Windows::Forms::Label());
			this->cboPersonas = (gcnew System::Windows::Forms::ComboBox());
			this->lblSeleccionPersona = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtIDCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtSaldo = (gcnew System::Windows::Forms::TextBox());
			this->cboMembresia = (gcnew System::Windows::Forms::ComboBox());
			this->cboAñoIngreso = (gcnew System::Windows::Forms::ComboBox());
			this->txtOcupacion = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrarCliente = (gcnew System::Windows::Forms::Button());
			this->btnMostrarCliente = (gcnew System::Windows::Forms::Button());
			this->lblNom = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblApel = (gcnew System::Windows::Forms::Label());
			this->lblApellido = (gcnew System::Windows::Forms::Label());
			this->lblIDcliente = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->lblAñoIngreso = (gcnew System::Windows::Forms::Label());
			this->lblCorreoCliente = (gcnew System::Windows::Forms::Label());
			this->lblMembresia = (gcnew System::Windows::Forms::Label());
			this->lblOcupacion = (gcnew System::Windows::Forms::Label());
			this->lblSaldo = (gcnew System::Windows::Forms::Label());
			this->lblDireccionCliente = (gcnew System::Windows::Forms::Label());
			this->txtDireccionCliente = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->txtCorreoCliente = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// lblRegistroCliente
			// 
			this->lblRegistroCliente->AutoSize = true;
			this->lblRegistroCliente->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegistroCliente->Location = System::Drawing::Point(228, 46);
			this->lblRegistroCliente->Name = L"lblRegistroCliente";
			this->lblRegistroCliente->Size = System::Drawing::Size(280, 36);
			this->lblRegistroCliente->TabIndex = 0;
			this->lblRegistroCliente->Text = L"Registro De Cliente";
			// 
			// cboPersonas
			// 
			this->cboPersonas->FormattingEnabled = true;
			this->cboPersonas->Location = System::Drawing::Point(122, 185);
			this->cboPersonas->Name = L"cboPersonas";
			this->cboPersonas->Size = System::Drawing::Size(121, 21);
			this->cboPersonas->TabIndex = 1;
			this->cboPersonas->SelectedIndexChanged += gcnew System::EventHandler(this, &frmCliente::cboPersonas_SelectedIndexChanged);
			// 
			// lblSeleccionPersona
			// 
			this->lblSeleccionPersona->AutoSize = true;
			this->lblSeleccionPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblSeleccionPersona->Location = System::Drawing::Point(119, 169);
			this->lblSeleccionPersona->Name = L"lblSeleccionPersona";
			this->lblSeleccionPersona->Size = System::Drawing::Size(104, 13);
			this->lblSeleccionPersona->TabIndex = 2;
			this->lblSeleccionPersona->Text = L"Seleccione su ID";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(80, 167);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(42, 43);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(455, 88);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(228, 223);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// txtIDCliente
			// 
			this->txtIDCliente->Location = System::Drawing::Point(264, 185);
			this->txtIDCliente->Name = L"txtIDCliente";
			this->txtIDCliente->Size = System::Drawing::Size(121, 20);
			this->txtIDCliente->TabIndex = 5;
			// 
			// txtSaldo
			// 
			this->txtSaldo->Location = System::Drawing::Point(455, 345);
			this->txtSaldo->Name = L"txtSaldo";
			this->txtSaldo->Size = System::Drawing::Size(121, 20);
			this->txtSaldo->TabIndex = 6;
			// 
			// cboMembresia
			// 
			this->cboMembresia->FormattingEnabled = true;
			this->cboMembresia->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Clasica", L"Premium", L"Mixta" });
			this->cboMembresia->Location = System::Drawing::Point(177, 474);
			this->cboMembresia->Name = L"cboMembresia";
			this->cboMembresia->Size = System::Drawing::Size(121, 21);
			this->cboMembresia->TabIndex = 8;
			// 
			// cboAñoIngreso
			// 
			this->cboAñoIngreso->FormattingEnabled = true;
			this->cboAñoIngreso->Location = System::Drawing::Point(178, 344);
			this->cboAñoIngreso->Name = L"cboAñoIngreso";
			this->cboAñoIngreso->Size = System::Drawing::Size(121, 21);
			this->cboAñoIngreso->TabIndex = 10;
			// 
			// txtOcupacion
			// 
			this->txtOcupacion->Location = System::Drawing::Point(179, 538);
			this->txtOcupacion->Name = L"txtOcupacion";
			this->txtOcupacion->Size = System::Drawing::Size(121, 20);
			this->txtOcupacion->TabIndex = 11;
			// 
			// btnRegistrarCliente
			// 
			this->btnRegistrarCliente->BackColor = System::Drawing::Color::PeachPuff;
			this->btnRegistrarCliente->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrarCliente->FlatAppearance->BorderSize = 2;
			this->btnRegistrarCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnRegistrarCliente->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegistrarCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrarCliente.Image")));
			this->btnRegistrarCliente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegistrarCliente->Location = System::Drawing::Point(455, 424);
			this->btnRegistrarCliente->Name = L"btnRegistrarCliente";
			this->btnRegistrarCliente->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnRegistrarCliente->Size = System::Drawing::Size(152, 53);
			this->btnRegistrarCliente->TabIndex = 12;
			this->btnRegistrarCliente->Text = L"Registrar Cliente";
			this->btnRegistrarCliente->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrarCliente->UseVisualStyleBackColor = false;
			this->btnRegistrarCliente->Click += gcnew System::EventHandler(this, &frmCliente::btnRegistrarCliente_Click);
			// 
			// btnMostrarCliente
			// 
			this->btnMostrarCliente->BackColor = System::Drawing::Color::PeachPuff;
			this->btnMostrarCliente->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrarCliente->FlatAppearance->BorderSize = 2;
			this->btnMostrarCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarCliente->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMostrarCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrarCliente.Image")));
			this->btnMostrarCliente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrarCliente->Location = System::Drawing::Point(455, 491);
			this->btnMostrarCliente->Name = L"btnMostrarCliente";
			this->btnMostrarCliente->Size = System::Drawing::Size(152, 53);
			this->btnMostrarCliente->TabIndex = 13;
			this->btnMostrarCliente->Text = L"Mostrar";
			this->btnMostrarCliente->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMostrarCliente->UseVisualStyleBackColor = false;
			this->btnMostrarCliente->Click += gcnew System::EventHandler(this, &frmCliente::btnMostrarCliente_Click);
			// 
			// lblNom
			// 
			this->lblNom->AutoSize = true;
			this->lblNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblNom->Location = System::Drawing::Point(119, 242);
			this->lblNom->Name = L"lblNom";
			this->lblNom->Size = System::Drawing::Size(58, 13);
			this->lblNom->TabIndex = 14;
			this->lblNom->Text = L"Nombre: ";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(177, 242);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(0, 13);
			this->lblNombre->TabIndex = 15;
			// 
			// lblApel
			// 
			this->lblApel->AutoSize = true;
			this->lblApel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblApel->Location = System::Drawing::Point(279, 242);
			this->lblApel->Name = L"lblApel";
			this->lblApel->Size = System::Drawing::Size(60, 13);
			this->lblApel->TabIndex = 16;
			this->lblApel->Text = L"Apellido: ";
			// 
			// lblApellido
			// 
			this->lblApellido->AutoSize = true;
			this->lblApellido->Location = System::Drawing::Point(339, 242);
			this->lblApellido->Name = L"lblApellido";
			this->lblApellido->Size = System::Drawing::Size(0, 13);
			this->lblApellido->TabIndex = 17;
			// 
			// lblIDcliente
			// 
			this->lblIDcliente->AutoSize = true;
			this->lblIDcliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDcliente->Location = System::Drawing::Point(265, 169);
			this->lblIDcliente->Name = L"lblIDcliente";
			this->lblIDcliente->Size = System::Drawing::Size(83, 13);
			this->lblIDcliente->TabIndex = 18;
			this->lblIDcliente->Text = L"ID del cliente";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(118, 328);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 38);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(116, 583);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 42);
			this->pictureBox4->TabIndex = 20;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(119, 461);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(38, 42);
			this->pictureBox5->TabIndex = 21;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(116, 522);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 37);
			this->pictureBox7->TabIndex = 23;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(393, 332);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(43, 34);
			this->pictureBox8->TabIndex = 24;
			this->pictureBox8->TabStop = false;
			// 
			// lblAñoIngreso
			// 
			this->lblAñoIngreso->AutoSize = true;
			this->lblAñoIngreso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAñoIngreso->Location = System::Drawing::Point(177, 329);
			this->lblAñoIngreso->Name = L"lblAñoIngreso";
			this->lblAñoIngreso->Size = System::Drawing::Size(92, 13);
			this->lblAñoIngreso->TabIndex = 25;
			this->lblAñoIngreso->Text = L"Año de ingreso";
			// 
			// lblCorreoCliente
			// 
			this->lblCorreoCliente->AutoSize = true;
			this->lblCorreoCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCorreoCliente->Location = System::Drawing::Point(177, 581);
			this->lblCorreoCliente->Name = L"lblCorreoCliente";
			this->lblCorreoCliente->Size = System::Drawing::Size(111, 13);
			this->lblCorreoCliente->TabIndex = 26;
			this->lblCorreoCliente->Text = L"Correo electronico";
			// 
			// lblMembresia
			// 
			this->lblMembresia->AutoSize = true;
			this->lblMembresia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMembresia->Location = System::Drawing::Point(177, 459);
			this->lblMembresia->Name = L"lblMembresia";
			this->lblMembresia->Size = System::Drawing::Size(113, 13);
			this->lblMembresia->TabIndex = 27;
			this->lblMembresia->Text = L"Tipo de membresia";
			// 
			// lblOcupacion
			// 
			this->lblOcupacion->AutoSize = true;
			this->lblOcupacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOcupacion->Location = System::Drawing::Point(177, 524);
			this->lblOcupacion->Name = L"lblOcupacion";
			this->lblOcupacion->Size = System::Drawing::Size(68, 13);
			this->lblOcupacion->TabIndex = 29;
			this->lblOcupacion->Text = L"Ocupacion";
			// 
			// lblSaldo
			// 
			this->lblSaldo->AutoSize = true;
			this->lblSaldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSaldo->Location = System::Drawing::Point(452, 329);
			this->lblSaldo->Name = L"lblSaldo";
			this->lblSaldo->Size = System::Drawing::Size(39, 13);
			this->lblSaldo->TabIndex = 30;
			this->lblSaldo->Text = L"Saldo";
			// 
			// lblDireccionCliente
			// 
			this->lblDireccionCliente->AutoSize = true;
			this->lblDireccionCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblDireccionCliente->Location = System::Drawing::Point(177, 397);
			this->lblDireccionCliente->Name = L"lblDireccionCliente";
			this->lblDireccionCliente->Size = System::Drawing::Size(61, 13);
			this->lblDireccionCliente->TabIndex = 31;
			this->lblDireccionCliente->Text = L"Direccion";
			// 
			// txtDireccionCliente
			// 
			this->txtDireccionCliente->Location = System::Drawing::Point(177, 414);
			this->txtDireccionCliente->Name = L"txtDireccionCliente";
			this->txtDireccionCliente->Size = System::Drawing::Size(121, 20);
			this->txtDireccionCliente->TabIndex = 32;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(122, 397);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(36, 37);
			this->pictureBox6->TabIndex = 33;
			this->pictureBox6->TabStop = false;
			// 
			// txtCorreoCliente
			// 
			this->txtCorreoCliente->Location = System::Drawing::Point(180, 598);
			this->txtCorreoCliente->Name = L"txtCorreoCliente";
			this->txtCorreoCliente->Size = System::Drawing::Size(120, 20);
			this->txtCorreoCliente->TabIndex = 34;
			// 
			// frmCliente
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(738, 657);
			this->Controls->Add(this->txtCorreoCliente);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->txtDireccionCliente);
			this->Controls->Add(this->lblDireccionCliente);
			this->Controls->Add(this->lblSaldo);
			this->Controls->Add(this->lblOcupacion);
			this->Controls->Add(this->lblMembresia);
			this->Controls->Add(this->lblCorreoCliente);
			this->Controls->Add(this->lblAñoIngreso);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->lblIDcliente);
			this->Controls->Add(this->lblApellido);
			this->Controls->Add(this->lblApel);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblNom);
			this->Controls->Add(this->btnMostrarCliente);
			this->Controls->Add(this->btnRegistrarCliente);
			this->Controls->Add(this->txtOcupacion);
			this->Controls->Add(this->cboAñoIngreso);
			this->Controls->Add(this->cboMembresia);
			this->Controls->Add(this->txtSaldo);
			this->Controls->Add(this->txtIDCliente);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblSeleccionPersona);
			this->Controls->Add(this->cboPersonas);
			this->Controls->Add(this->lblRegistroCliente);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cliente";
			this->Load += gcnew System::EventHandler(this, &frmCliente::frmCliente_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMostrarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			frmListaCliente^ listaCliente = gcnew frmListaCliente;
			listaCliente->Show();
			ifstream ArchivoClienteEntrada("Clientes.dat", ios::binary | ios::app | ios::in);
			if (!ArchivoClienteEntrada)
			{
				throw gcnew Exception("No se pudo abrir el archivo");
			}
			Cliente leerCliente;
			ArchivoClienteEntrada.read(reinterpret_cast<char*>(&leerCliente), sizeof(Cliente));
			while (!ArchivoClienteEntrada.eof())
			{
				System::String^ nombre = marshal_as<System::String^>(leerCliente.obtenerPrimerNombre());
				System::String^ direccion = marshal_as<System::String^>(leerCliente.obtenerDireccion());
				System::String^ ocupacion = marshal_as<System::String^>(leerCliente.obtenerOcupacion());
				System::String^ correo = marshal_as<System::String^>(leerCliente.obtenerCorreo());
				System::String^ tipoM = marshal_as<System::String^>(leerCliente.obtenerTipoMembresia());
				std::string año1 = to_string(leerCliente.obtenerAñoIngreso());
				std::string sald = to_string(leerCliente.obtenerSaldo());
				std::string id = to_string(leerCliente.obtenerIDcliente());
				System::String^ año = marshal_as<System::String^>(año1);
				System::String^ saldo = marshal_as<System::String^>(sald);
				System::String^ IDC = marshal_as<System::String^>(id);
				listaCliente->dgvListaClientes->Rows->Add(IDC, nombre, direccion, año, tipoM, correo, ocupacion);
				ArchivoClienteEntrada.read(reinterpret_cast<char*>(&leerCliente), sizeof(Cliente));
			}
		}
		catch (Exception^ excep)
		{
			MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
private: System::Void frmCliente_Load(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream archivoClientes("Clientes.dat", ios::binary | ios::app | ios::out);
		if (!archivoClientes)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo");
		}
		ifstream archivoPersonaEntrada("Personas.dat", ios::binary | ios::app | ios::in);
		if (!archivoPersonaEntrada)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo");
		}
		Persona leerPersona;
		archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
		while (!archivoPersonaEntrada.eof())
		{
			std::string idPersona = to_string(leerPersona.obtenerID());
			std::string tipoPersona = leerPersona.obtenerTipoPersona();
			System::String^ ID = marshal_as<System::String^>(idPersona);
			if (tipoPersona == "Cliente")
			{
				cboPersonas->Items->Add(ID);
			}
			archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
		}


		for (int i = DateTime::Now.Year; i >= 1950; i--)
		{
			cboAñoIngreso->Items->Add(i);
		}

		archivoPersonaEntrada.close();
	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void cboPersonas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ifstream archivoPersonaEntrada("Personas.dat", ios::binary | ios::app | ios::in);
		if (!archivoPersonaEntrada)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo");
		}
		ifstream archivoClienteEntrada("Clientes.dat", ios::binary | ios::app | ios::in);
		if (!archivoClienteEntrada)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo");
		}
		System::String^ IDpersona = cboPersonas->SelectedItem->ToString();
		int num = Convert::ToInt32(cboPersonas->SelectedItem->ToString());
		Cliente leerCliente;
		archivoClienteEntrada.read(reinterpret_cast<char*>(&leerCliente), sizeof(Cliente));
		while (!archivoClienteEntrada.eof())
		{
			int iD = leerCliente.obtenerID();
			if (num != iD)
			{
				archivoClienteEntrada.read(reinterpret_cast<char*>(&leerCliente), sizeof(Cliente));
			}
			else
			{
				txtIDCliente->Text = "";
				lblNombre->Text = "";
				lblApellido->Text = "";
				throw gcnew Exception("El ID ya esta en uso.");
			}

		}
		txtIDCliente->Text = IDpersona;
		Persona leerPersona;
		archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
		while (!archivoPersonaEntrada.eof())
		{
			std::string nombre = leerPersona.obtenerPrimerNombre();
			std::string apellido = leerPersona.obtenerApellidoPaterno();
			System::String^ nombrep = marshal_as<System::String^>(nombre);
			System::String^ apellidop = marshal_as<System::String^>(apellido);
			std::string id = to_string(leerPersona.obtenerID());
			System::String^ id1 = marshal_as<System::String^>(id);
			if (id1 == IDpersona)
			{
				lblNombre->Text = nombrep;
				lblApellido->Text = apellidop;
			}
			archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
		}
	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnRegistrarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

		ofstream archivoClienteSalida("Clientes.dat", ios::binary | ios::app | ios::out);
		if (!archivoClienteSalida)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo");
		}
		ifstream archivoPersonaEntrada("Personas.dat", ios::binary | ios::app | ios::in);
		if (!archivoPersonaEntrada)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo");
		}
		/////Archivo Personas
		Persona leerPersona;
		archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
		while (!archivoPersonaEntrada.eof())
		{
			std::string id = to_string(leerPersona.obtenerID());
			System::String^ ID1 = marshal_as<System::String^>(id);
			//Validacion ID
			int ID = Convert::ToInt32(cboPersonas->SelectedItem->ToString());
			if (cboPersonas->SelectedItem == nullptr)
			{
				throw gcnew Exception("Seleccione un ID valido.");
			}
			//
			if (ID1 == txtIDCliente->Text)
			{
				/////Variables persona
				std::string nombre = leerPersona.obtenerPrimerNombre();
				std::string apellido = leerPersona.obtenerApellidoPaterno();
				std::string identificacion = leerPersona.obtenerIdentificacion();
				std::string tipoC = leerPersona.obtenerTipoPersona();
				std::string genero = leerPersona.obtenerGenero();
				int telefono = Convert::ToInt32(leerPersona.obtenerTelefono());
				int edad = Convert::ToInt32(leerPersona.obtenerEdad());
				int IdP = Convert::ToInt32(leerPersona.obtenerID());
				/////Variables Cliente
				// ID

				//Año de ingreso
				if (cboAñoIngreso->SelectedItem == nullptr)
				{
					throw gcnew Exception("Seleccione un año de ingreso.");
				}
				int año = Convert::ToInt32(cboAñoIngreso->SelectedItem->ToString());
				//Direccion
				System::String^ dir = txtDireccionCliente->Text;
				if (dir == "")
				{
					throw gcnew Exception("Ingrese la direccion.");
				}
				else if (dir->Length < 4)
				{
					throw gcnew Exception("La direccion es demasiado corta.");
				}
				//Membresia
				if (cboMembresia->SelectedItem == nullptr)
				{
					throw gcnew Exception("Seleccione el tipo de membresia.");
				}
				System::String^ tip = cboMembresia->SelectedItem->ToString();
				//ocupacion
				if (txtOcupacion->Text == "")
				{
					throw gcnew Exception("Ingrese la ocupacion.");
				}
				else if (txtOcupacion->Text->Length < 4)
				{
					throw gcnew Exception("La ocupacion es demasiado corta.");
				}
				System::String^ ocup = txtOcupacion->Text;
				//correo
				if (txtCorreoCliente->Text == "")
				{
					throw gcnew Exception("Ingrese el correo electronico.");
				}
				else if (txtCorreoCliente->Text->Length < 6)
				{
					throw gcnew Exception("El correo no puede ser tan corto.");
				}
				System::String^ cor = txtCorreoCliente->Text;
				// Saldo
				if (txtSaldo->Text == "")
				{
					throw gcnew Exception("Ingrese el saldo.");
				}
				double saldo = Convert::ToDouble(txtSaldo->Text);
				if (saldo <= 0)
				{
					throw gcnew Exception("El saldo tiene que ser positivo y mayor que 0.");
				}

				std::string direccion = marshal_as<std::string>(dir);
				std::string ocupacion = marshal_as<std::string>(ocup);
				std::string correo = marshal_as<std::string>(cor);
				std::string tipoM = marshal_as<std::string>(tip);
				//////
				Cliente cliente(nombre, apellido, identificacion, tipoC, genero, telefono, edad, IdP, direccion, ocupacion, correo, tipoM, año, saldo, ID);
				archivoClienteSalida.write(reinterpret_cast<char*>(&cliente), sizeof(Cliente));
				archivoClienteSalida.close();
				txtCorreoCliente->Text = "";
				txtDireccionCliente->Text = "";
				txtIDCliente->Text = "";
				txtOcupacion->Text = "";
				txtSaldo->Text = "";
				cboAñoIngreso->Text = "";
				cboMembresia->Text = "";
				cboPersonas->Text = "";
			}
			archivoPersonaEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Persona));
		}
	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}