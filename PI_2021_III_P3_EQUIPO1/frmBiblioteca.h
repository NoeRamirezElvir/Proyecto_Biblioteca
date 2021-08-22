#pragma once
#include "frmPersona.h"
#include "frmCliente.h"
#include "frmLibro.h"
#include "frmSucursal.h"
#include "frmSalaComputo.h"
#include "frmComputadora.h"
#include "frmEstante.h"
#include "frmDaño.h"
#include "frmPrestamo.h"
#include "frmEmpleado.h"
#include "frmFactura.h"
#include "frmProveedores.h"
#include "frmRecibidos.h"
#include "frmSalaLectura.h"

namespace PI2021IIIP3EQUIPO1 {
	using namespace System;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmBiblioteca
	/// </summary>
	public ref class frmBiblioteca : public System::Windows::Forms::Form
	{
	public:
		frmBiblioteca(void)
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
		~frmBiblioteca()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPersona;
	protected:
	private: System::Windows::Forms::Button^ btnCliente;
	private: System::Windows::Forms::Button^ btnLibro;
	private: System::Windows::Forms::Button^ btnEstantes;
	private: System::Windows::Forms::Button^ btnComputadora;


	private: System::Windows::Forms::Button^ btnComputo;
	private: System::Windows::Forms::Button^ btnSucursal;
	private: System::Windows::Forms::Button^ btnDaño;
	private: System::Windows::Forms::Button^ btnFactura;
	private: System::Windows::Forms::Button^ btnEmpleado;
	private: System::Windows::Forms::Button^ btnPrestamo;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnProveedores;
	private: System::Windows::Forms::Button^ btnSalaLectura;
	private: System::Windows::Forms::Button^ btnInventario;
	private: System::Windows::Forms::Button^ btnSalir;
	public: System::Windows::Forms::Label^ lblsaludo;
	private:








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmBiblioteca::typeid));
			this->btnPersona = (gcnew System::Windows::Forms::Button());
			this->btnCliente = (gcnew System::Windows::Forms::Button());
			this->btnLibro = (gcnew System::Windows::Forms::Button());
			this->btnEstantes = (gcnew System::Windows::Forms::Button());
			this->btnComputadora = (gcnew System::Windows::Forms::Button());
			this->btnComputo = (gcnew System::Windows::Forms::Button());
			this->btnSucursal = (gcnew System::Windows::Forms::Button());
			this->btnDaño = (gcnew System::Windows::Forms::Button());
			this->btnFactura = (gcnew System::Windows::Forms::Button());
			this->btnEmpleado = (gcnew System::Windows::Forms::Button());
			this->btnPrestamo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnProveedores = (gcnew System::Windows::Forms::Button());
			this->btnSalaLectura = (gcnew System::Windows::Forms::Button());
			this->btnInventario = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->lblsaludo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnPersona
			// 
			this->btnPersona->BackColor = System::Drawing::Color::LightSalmon;
			this->btnPersona->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnPersona->FlatAppearance->BorderSize = 2;
			this->btnPersona->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPersona->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPersona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPersona.Image")));
			this->btnPersona->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersona->Location = System::Drawing::Point(69, 129);
			this->btnPersona->Name = L"btnPersona";
			this->btnPersona->Size = System::Drawing::Size(164, 47);
			this->btnPersona->TabIndex = 0;
			this->btnPersona->Text = L"Persona";
			this->btnPersona->UseVisualStyleBackColor = false;
			this->btnPersona->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnPersona_Click);
			// 
			// btnCliente
			// 
			this->btnCliente->BackColor = System::Drawing::Color::LightSalmon;
			this->btnCliente->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnCliente->FlatAppearance->BorderSize = 2;
			this->btnCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCliente.Image")));
			this->btnCliente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCliente->Location = System::Drawing::Point(69, 183);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(164, 47);
			this->btnCliente->TabIndex = 1;
			this->btnCliente->Text = L"Cliente";
			this->btnCliente->UseVisualStyleBackColor = false;
			this->btnCliente->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnCliente_Click);
			// 
			// btnLibro
			// 
			this->btnLibro->BackColor = System::Drawing::Color::LightSalmon;
			this->btnLibro->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnLibro->FlatAppearance->BorderSize = 2;
			this->btnLibro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLibro->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnLibro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLibro.Image")));
			this->btnLibro->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLibro->Location = System::Drawing::Point(69, 236);
			this->btnLibro->Name = L"btnLibro";
			this->btnLibro->Size = System::Drawing::Size(164, 47);
			this->btnLibro->TabIndex = 2;
			this->btnLibro->Text = L"Libros";
			this->btnLibro->UseVisualStyleBackColor = false;
			this->btnLibro->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnLibro_Click);
			// 
			// btnEstantes
			// 
			this->btnEstantes->BackColor = System::Drawing::Color::LightSalmon;
			this->btnEstantes->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnEstantes->FlatAppearance->BorderSize = 2;
			this->btnEstantes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEstantes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEstantes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEstantes.Image")));
			this->btnEstantes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEstantes->Location = System::Drawing::Point(69, 290);
			this->btnEstantes->Name = L"btnEstantes";
			this->btnEstantes->Size = System::Drawing::Size(164, 47);
			this->btnEstantes->TabIndex = 3;
			this->btnEstantes->Text = L"Estante";
			this->btnEstantes->UseVisualStyleBackColor = false;
			this->btnEstantes->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnEstantes_Click);
			// 
			// btnComputadora
			// 
			this->btnComputadora->BackColor = System::Drawing::Color::LightSalmon;
			this->btnComputadora->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnComputadora->FlatAppearance->BorderSize = 2;
			this->btnComputadora->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComputadora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComputadora->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComputadora.Image")));
			this->btnComputadora->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComputadora->Location = System::Drawing::Point(276, 236);
			this->btnComputadora->Name = L"btnComputadora";
			this->btnComputadora->Size = System::Drawing::Size(164, 47);
			this->btnComputadora->TabIndex = 4;
			this->btnComputadora->Text = L"Computadora";
			this->btnComputadora->UseVisualStyleBackColor = false;
			this->btnComputadora->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnComputadora_Click);
			// 
			// btnComputo
			// 
			this->btnComputo->BackColor = System::Drawing::Color::LightSalmon;
			this->btnComputo->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnComputo->FlatAppearance->BorderSize = 2;
			this->btnComputo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComputo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComputo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComputo.Image")));
			this->btnComputo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComputo->Location = System::Drawing::Point(276, 183);
			this->btnComputo->Name = L"btnComputo";
			this->btnComputo->Size = System::Drawing::Size(164, 47);
			this->btnComputo->TabIndex = 5;
			this->btnComputo->Text = L"Sala de Computo";
			this->btnComputo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnComputo->UseVisualStyleBackColor = false;
			this->btnComputo->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnComputo_Click);
			// 
			// btnSucursal
			// 
			this->btnSucursal->BackColor = System::Drawing::Color::LightSalmon;
			this->btnSucursal->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnSucursal->FlatAppearance->BorderSize = 2;
			this->btnSucursal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSucursal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSucursal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSucursal.Image")));
			this->btnSucursal->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSucursal->Location = System::Drawing::Point(275, 290);
			this->btnSucursal->Name = L"btnSucursal";
			this->btnSucursal->Size = System::Drawing::Size(164, 47);
			this->btnSucursal->TabIndex = 6;
			this->btnSucursal->Text = L"Sucursal";
			this->btnSucursal->UseVisualStyleBackColor = false;
			this->btnSucursal->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnSucursal_Click);
			// 
			// btnDaño
			// 
			this->btnDaño->BackColor = System::Drawing::Color::LightSalmon;
			this->btnDaño->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnDaño->FlatAppearance->BorderSize = 2;
			this->btnDaño->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDaño->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDaño->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnDaño->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDaño.Image")));
			this->btnDaño->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDaño->Location = System::Drawing::Point(69, 343);
			this->btnDaño->Name = L"btnDaño";
			this->btnDaño->Size = System::Drawing::Size(164, 47);
			this->btnDaño->TabIndex = 7;
			this->btnDaño->Text = L"Daño a Libros";
			this->btnDaño->UseVisualStyleBackColor = false;
			this->btnDaño->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnDaño_Click);
			// 
			// btnFactura
			// 
			this->btnFactura->BackColor = System::Drawing::Color::LightSalmon;
			this->btnFactura->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnFactura->FlatAppearance->BorderSize = 2;
			this->btnFactura->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFactura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFactura->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnFactura->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFactura.Image")));
			this->btnFactura->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFactura->Location = System::Drawing::Point(276, 130);
			this->btnFactura->Name = L"btnFactura";
			this->btnFactura->Size = System::Drawing::Size(164, 47);
			this->btnFactura->TabIndex = 8;
			this->btnFactura->Text = L"Factura";
			this->btnFactura->UseVisualStyleBackColor = false;
			this->btnFactura->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnFactura_Click);
			// 
			// btnEmpleado
			// 
			this->btnEmpleado->BackColor = System::Drawing::Color::LightSalmon;
			this->btnEmpleado->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnEmpleado->FlatAppearance->BorderSize = 2;
			this->btnEmpleado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmpleado->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnEmpleado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEmpleado.Image")));
			this->btnEmpleado->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEmpleado->Location = System::Drawing::Point(69, 449);
			this->btnEmpleado->Name = L"btnEmpleado";
			this->btnEmpleado->Size = System::Drawing::Size(164, 47);
			this->btnEmpleado->TabIndex = 9;
			this->btnEmpleado->Text = L"Empleado";
			this->btnEmpleado->UseVisualStyleBackColor = false;
			this->btnEmpleado->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnEmpleado_Click);
			// 
			// btnPrestamo
			// 
			this->btnPrestamo->BackColor = System::Drawing::Color::LightSalmon;
			this->btnPrestamo->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnPrestamo->FlatAppearance->BorderSize = 2;
			this->btnPrestamo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrestamo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrestamo->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPrestamo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrestamo.Image")));
			this->btnPrestamo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPrestamo->Location = System::Drawing::Point(69, 396);
			this->btnPrestamo->Name = L"btnPrestamo";
			this->btnPrestamo->Size = System::Drawing::Size(164, 47);
			this->btnPrestamo->TabIndex = 10;
			this->btnPrestamo->Text = L"Prestamo";
			this->btnPrestamo->UseVisualStyleBackColor = false;
			this->btnPrestamo->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnPrestamo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(788, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 14;
			// 
			// btnProveedores
			// 
			this->btnProveedores->BackColor = System::Drawing::Color::LightSalmon;
			this->btnProveedores->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnProveedores->FlatAppearance->BorderSize = 2;
			this->btnProveedores->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProveedores->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProveedores.Image")));
			this->btnProveedores->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProveedores->Location = System::Drawing::Point(275, 343);
			this->btnProveedores->Name = L"btnProveedores";
			this->btnProveedores->Size = System::Drawing::Size(164, 47);
			this->btnProveedores->TabIndex = 15;
			this->btnProveedores->Text = L"Proveedores";
			this->btnProveedores->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnProveedores->UseVisualStyleBackColor = false;
			this->btnProveedores->Click += gcnew System::EventHandler(this, &frmBiblioteca::button1_Click);
			// 
			// btnSalaLectura
			// 
			this->btnSalaLectura->BackColor = System::Drawing::Color::LightSalmon;
			this->btnSalaLectura->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnSalaLectura->FlatAppearance->BorderSize = 2;
			this->btnSalaLectura->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalaLectura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalaLectura->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSalaLectura.Image")));
			this->btnSalaLectura->Location = System::Drawing::Point(276, 448);
			this->btnSalaLectura->Name = L"btnSalaLectura";
			this->btnSalaLectura->Size = System::Drawing::Size(164, 46);
			this->btnSalaLectura->TabIndex = 16;
			this->btnSalaLectura->Text = L"Sala de lectura";
			this->btnSalaLectura->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSalaLectura->UseVisualStyleBackColor = false;
			this->btnSalaLectura->Click += gcnew System::EventHandler(this, &frmBiblioteca::button2_Click);
			// 
			// btnInventario
			// 
			this->btnInventario->BackColor = System::Drawing::Color::LightSalmon;
			this->btnInventario->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnInventario->FlatAppearance->BorderSize = 2;
			this->btnInventario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInventario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInventario->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnInventario.Image")));
			this->btnInventario->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInventario->Location = System::Drawing::Point(276, 395);
			this->btnInventario->Name = L"btnInventario";
			this->btnInventario->Size = System::Drawing::Size(164, 47);
			this->btnInventario->TabIndex = 17;
			this->btnInventario->Text = L"Inventario";
			this->btnInventario->UseVisualStyleBackColor = false;
			this->btnInventario->Click += gcnew System::EventHandler(this, &frmBiblioteca::button3_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::Sienna;
			this->btnSalir->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSalir.Image")));
			this->btnSalir->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSalir->Location = System::Drawing::Point(878, 528);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(80, 41);
			this->btnSalir->TabIndex = 18;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnSalir_Click);
			// 
			// lblsaludo
			// 
			this->lblsaludo->AutoSize = true;
			this->lblsaludo->BackColor = System::Drawing::Color::Transparent;
			this->lblsaludo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblsaludo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblsaludo->Location = System::Drawing::Point(614, 24);
			this->lblsaludo->Name = L"lblsaludo";
			this->lblsaludo->Size = System::Drawing::Size(0, 24);
			this->lblsaludo->TabIndex = 19;
			// 
			// frmBiblioteca
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(989, 594);
			this->Controls->Add(this->lblsaludo);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnInventario);
			this->Controls->Add(this->btnSalaLectura);
			this->Controls->Add(this->btnProveedores);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnPrestamo);
			this->Controls->Add(this->btnEmpleado);
			this->Controls->Add(this->btnFactura);
			this->Controls->Add(this->btnDaño);
			this->Controls->Add(this->btnSucursal);
			this->Controls->Add(this->btnComputo);
			this->Controls->Add(this->btnComputadora);
			this->Controls->Add(this->btnEstantes);
			this->Controls->Add(this->btnLibro);
			this->Controls->Add(this->btnCliente);
			this->Controls->Add(this->btnPersona);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmBiblioteca";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Biblioteca";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPersona_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPersona^ formulario = gcnew frmPersona;
		formulario->Show();
	}
	private: System::Void btnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCliente^ formulario = gcnew frmCliente;
		formulario->Show();
	}
	private: System::Void btnLibro_Click(System::Object^ sender, System::EventArgs^ e) {
		frmLibro^ formulario = gcnew frmLibro;
		formulario->Show();
	}
private: System::Void btnComputo_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSalaComputo^ formulario = gcnew frmSalaComputo;
	formulario->Show();
}
private: System::Void btnEstantes_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEstante^ formulario = gcnew frmEstante;
	formulario->Show();
}


private: System::Void btnComputadora_Click(System::Object^ sender, System::EventArgs^ e) {
	frmComputadora^ formulario = gcnew frmComputadora;
	formulario->Show();
}

private: System::Void btnSucursal_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSucursal^ formulario = gcnew frmSucursal;
	formulario->Show();
}
private: System::Void btnDaño_Click(System::Object^ sender, System::EventArgs^ e) {
	frmDaño^ formulario = gcnew frmDaño;
	formulario->Show();
}
private: System::Void btnPrestamo_Click(System::Object^ sender, System::EventArgs^ e) {
	frmPrestamo^ formulario = gcnew frmPrestamo;
	formulario->Show(); 
}
private: System::Void btnEmpleado_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEmpleado^ formulario = gcnew frmEmpleado;
	formulario->Show();
}
private: System::Void btnFactura_Click(System::Object^ sender, System::EventArgs^ e) {
	frmFactura^ formulario = gcnew frmFactura;
	formulario->Show();
}
private: System::Void btnProveedores_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnSalaLectura_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btnInventario_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmProveedores^ proveedores = gcnew frmProveedores;
	proveedores->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSalaLectura^ ventana = gcnew frmSalaLectura;
	ventana->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRecibidos^ recibidos = gcnew frmRecibidos;
	recibidos->Show();
}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult resultado;
	resultado = MessageBox::Show("Seguro que desea salir? ", "Salir", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (resultado== System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
};
}
