#pragma once
#include "frmListaFactura.h"
#include "Cliente.h"
#include "Factura.h"
#include "Daño.h"
#include "Prestamo.h"
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
	/// Resumen de frmFactura
	/// </summary>
	public ref class frmFactura : public System::Windows::Forms::Form
	{
	public:
		frmFactura(void)
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
		~frmFactura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitulo;
	protected:
	private: System::Windows::Forms::Label^ lblFactura;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::Label^ lblIDCliente;

	private: System::Windows::Forms::ComboBox^ cboCliente;
	private: System::Windows::Forms::Label^ lblDatos;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblCliente;
	private: System::Windows::Forms::Label^ lblClienteNombre;





	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lblEmpleado;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::Label^ lblTipoMembresia;
	private: System::Windows::Forms::Label^ lblMembresiaCliente;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lblPrestamo;
	private: System::Windows::Forms::Label^ lblTotalPagar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::Label^ lblNombreEmpleado;
	private: System::Windows::Forms::Label^ lblDia;
	private: System::Windows::Forms::Label^ lblTipoPrestamo;
	private: System::Windows::Forms::Label^ lblPago;
	private: System::Windows::Forms::Label^ lblMes;
	private: System::Windows::Forms::Label^ lblAño;
	private: System::Windows::Forms::Label^ lblEmpleadoApellido;

	private: System::Windows::Forms::Label^ lblDaño;
	private: System::Windows::Forms::Label^ lblTipoDaño;
	private: System::Windows::Forms::Label^ lblClienteApellido;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmFactura::typeid));
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblFactura = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->lblIDCliente = (gcnew System::Windows::Forms::Label());
			this->cboCliente = (gcnew System::Windows::Forms::ComboBox());
			this->lblDatos = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblCliente = (gcnew System::Windows::Forms::Label());
			this->lblClienteNombre = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblEmpleado = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblTipoMembresia = (gcnew System::Windows::Forms::Label());
			this->lblMembresiaCliente = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lblPrestamo = (gcnew System::Windows::Forms::Label());
			this->lblTotalPagar = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->lblNombreEmpleado = (gcnew System::Windows::Forms::Label());
			this->lblDia = (gcnew System::Windows::Forms::Label());
			this->lblTipoPrestamo = (gcnew System::Windows::Forms::Label());
			this->lblPago = (gcnew System::Windows::Forms::Label());
			this->lblMes = (gcnew System::Windows::Forms::Label());
			this->lblAño = (gcnew System::Windows::Forms::Label());
			this->lblEmpleadoApellido = (gcnew System::Windows::Forms::Label());
			this->lblDaño = (gcnew System::Windows::Forms::Label());
			this->lblTipoDaño = (gcnew System::Windows::Forms::Label());
			this->lblClienteApellido = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(222, 35);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(176, 25);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"La Casa Del Lector";
			// 
			// lblFactura
			// 
			this->lblFactura->AutoSize = true;
			this->lblFactura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFactura->Location = System::Drawing::Point(208, 79);
			this->lblFactura->Name = L"lblFactura";
			this->lblFactura->Size = System::Drawing::Size(84, 16);
			this->lblFactura->TabIndex = 1;
			this->lblFactura->Text = L"Factura No";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(298, 78);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(100, 20);
			this->txtID->TabIndex = 2;
			// 
			// lblIDCliente
			// 
			this->lblIDCliente->AutoSize = true;
			this->lblIDCliente->Location = System::Drawing::Point(82, 131);
			this->lblIDCliente->Name = L"lblIDCliente";
			this->lblIDCliente->Size = System::Drawing::Size(85, 13);
			this->lblIDCliente->TabIndex = 3;
			this->lblIDCliente->Text = L"No ID de Cliente";
			// 
			// cboCliente
			// 
			this->cboCliente->FormattingEnabled = true;
			this->cboCliente->Location = System::Drawing::Point(185, 128);
			this->cboCliente->Name = L"cboCliente";
			this->cboCliente->Size = System::Drawing::Size(121, 21);
			this->cboCliente->TabIndex = 4;
			this->cboCliente->SelectedIndexChanged += gcnew System::EventHandler(this, &frmFactura::cboCliente_SelectedIndexChanged);
			// 
			// lblDatos
			// 
			this->lblDatos->AutoSize = true;
			this->lblDatos->Location = System::Drawing::Point(244, 176);
			this->lblDatos->Name = L"lblDatos";
			this->lblDatos->Size = System::Drawing::Size(108, 13);
			this->lblDatos->TabIndex = 5;
			this->lblDatos->Text = L"Datos del Adquiriente";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(77, 192);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(446, 15);
			this->panel1->TabIndex = 6;
			// 
			// lblCliente
			// 
			this->lblCliente->AutoSize = true;
			this->lblCliente->Location = System::Drawing::Point(84, 225);
			this->lblCliente->Name = L"lblCliente";
			this->lblCliente->Size = System::Drawing::Size(42, 13);
			this->lblCliente->TabIndex = 7;
			this->lblCliente->Text = L"Cliente:";
			// 
			// lblClienteNombre
			// 
			this->lblClienteNombre->AutoSize = true;
			this->lblClienteNombre->Location = System::Drawing::Point(193, 225);
			this->lblClienteNombre->Name = L"lblClienteNombre";
			this->lblClienteNombre->Size = System::Drawing::Size(0, 13);
			this->lblClienteNombre->TabIndex = 8;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(77, 274);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(446, 16);
			this->panel2->TabIndex = 9;
			// 
			// lblEmpleado
			// 
			this->lblEmpleado->AutoSize = true;
			this->lblEmpleado->Location = System::Drawing::Point(84, 304);
			this->lblEmpleado->Name = L"lblEmpleado";
			this->lblEmpleado->Size = System::Drawing::Size(57, 13);
			this->lblEmpleado->TabIndex = 10;
			this->lblEmpleado->Text = L"Empleado:";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Location = System::Drawing::Point(84, 338);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(40, 13);
			this->lblFecha->TabIndex = 11;
			this->lblFecha->Text = L"Fecha:";
			// 
			// lblTipoMembresia
			// 
			this->lblTipoMembresia->AutoSize = true;
			this->lblTipoMembresia->Location = System::Drawing::Point(84, 258);
			this->lblTipoMembresia->Name = L"lblTipoMembresia";
			this->lblTipoMembresia->Size = System::Drawing::Size(85, 13);
			this->lblTipoMembresia->TabIndex = 0;
			this->lblTipoMembresia->Text = L"Tipo Membresia:";
			// 
			// lblMembresiaCliente
			// 
			this->lblMembresiaCliente->AutoSize = true;
			this->lblMembresiaCliente->Location = System::Drawing::Point(193, 258);
			this->lblMembresiaCliente->Name = L"lblMembresiaCliente";
			this->lblMembresiaCliente->Size = System::Drawing::Size(0, 13);
			this->lblMembresiaCliente->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(77, 354);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(446, 16);
			this->panel3->TabIndex = 13;
			// 
			// lblPrestamo
			// 
			this->lblPrestamo->AutoSize = true;
			this->lblPrestamo->Location = System::Drawing::Point(84, 385);
			this->lblPrestamo->Name = L"lblPrestamo";
			this->lblPrestamo->Size = System::Drawing::Size(54, 13);
			this->lblPrestamo->TabIndex = 14;
			this->lblPrestamo->Text = L"Prestamo:";
			// 
			// lblTotalPagar
			// 
			this->lblTotalPagar->AutoSize = true;
			this->lblTotalPagar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalPagar->Location = System::Drawing::Point(84, 447);
			this->lblTotalPagar->Name = L"lblTotalPagar";
			this->lblTotalPagar->Size = System::Drawing::Size(97, 15);
			this->lblTotalPagar->TabIndex = 15;
			this->lblTotalPagar->Text = L"Total a Pagar:";
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregar.Image")));
			this->btnAgregar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAgregar->Location = System::Drawing::Point(176, 494);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(96, 52);
			this->btnAgregar->TabIndex = 16;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAgregar->UseVisualStyleBackColor = false;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &frmFactura::btnAgregar_Click);
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrar.Image")));
			this->btnMostrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrar->Location = System::Drawing::Point(316, 494);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(96, 52);
			this->btnMostrar->TabIndex = 17;
			this->btnMostrar->Text = L"Mostrar  ";
			this->btnMostrar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmFactura::btnMostrar_Click);
			// 
			// lblNombreEmpleado
			// 
			this->lblNombreEmpleado->AutoSize = true;
			this->lblNombreEmpleado->Location = System::Drawing::Point(155, 304);
			this->lblNombreEmpleado->Name = L"lblNombreEmpleado";
			this->lblNombreEmpleado->Size = System::Drawing::Size(0, 13);
			this->lblNombreEmpleado->TabIndex = 18;
			// 
			// lblDia
			// 
			this->lblDia->AutoSize = true;
			this->lblDia->Location = System::Drawing::Point(155, 338);
			this->lblDia->Name = L"lblDia";
			this->lblDia->Size = System::Drawing::Size(0, 13);
			this->lblDia->TabIndex = 19;
			// 
			// lblTipoPrestamo
			// 
			this->lblTipoPrestamo->AutoSize = true;
			this->lblTipoPrestamo->Location = System::Drawing::Point(193, 385);
			this->lblTipoPrestamo->Name = L"lblTipoPrestamo";
			this->lblTipoPrestamo->Size = System::Drawing::Size(0, 13);
			this->lblTipoPrestamo->TabIndex = 20;
			// 
			// lblPago
			// 
			this->lblPago->AutoSize = true;
			this->lblPago->Location = System::Drawing::Point(193, 449);
			this->lblPago->Name = L"lblPago";
			this->lblPago->Size = System::Drawing::Size(0, 13);
			this->lblPago->TabIndex = 21;
			// 
			// lblMes
			// 
			this->lblMes->AutoSize = true;
			this->lblMes->Location = System::Drawing::Point(206, 338);
			this->lblMes->Name = L"lblMes";
			this->lblMes->Size = System::Drawing::Size(0, 13);
			this->lblMes->TabIndex = 22;
			// 
			// lblAño
			// 
			this->lblAño->AutoSize = true;
			this->lblAño->Location = System::Drawing::Point(259, 338);
			this->lblAño->Name = L"lblAño";
			this->lblAño->Size = System::Drawing::Size(0, 13);
			this->lblAño->TabIndex = 23;
			// 
			// lblEmpleadoApellido
			// 
			this->lblEmpleadoApellido->AutoSize = true;
			this->lblEmpleadoApellido->Location = System::Drawing::Point(226, 304);
			this->lblEmpleadoApellido->Name = L"lblEmpleadoApellido";
			this->lblEmpleadoApellido->Size = System::Drawing::Size(0, 13);
			this->lblEmpleadoApellido->TabIndex = 24;
			// 
			// lblDaño
			// 
			this->lblDaño->AutoSize = true;
			this->lblDaño->Location = System::Drawing::Point(84, 417);
			this->lblDaño->Name = L"lblDaño";
			this->lblDaño->Size = System::Drawing::Size(75, 13);
			this->lblDaño->TabIndex = 26;
			this->lblDaño->Text = L"Tipo de Daño:";
			// 
			// lblTipoDaño
			// 
			this->lblTipoDaño->AutoSize = true;
			this->lblTipoDaño->Location = System::Drawing::Point(193, 417);
			this->lblTipoDaño->Name = L"lblTipoDaño";
			this->lblTipoDaño->Size = System::Drawing::Size(0, 13);
			this->lblTipoDaño->TabIndex = 27;
			// 
			// lblClienteApellido
			// 
			this->lblClienteApellido->AutoSize = true;
			this->lblClienteApellido->Location = System::Drawing::Point(259, 225);
			this->lblClienteApellido->Name = L"lblClienteApellido";
			this->lblClienteApellido->Size = System::Drawing::Size(0, 13);
			this->lblClienteApellido->TabIndex = 25;
			// 
			// frmFactura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(602, 593);
			this->Controls->Add(this->lblTipoDaño);
			this->Controls->Add(this->lblDaño);
			this->Controls->Add(this->lblClienteApellido);
			this->Controls->Add(this->lblEmpleadoApellido);
			this->Controls->Add(this->lblAño);
			this->Controls->Add(this->lblMes);
			this->Controls->Add(this->lblPago);
			this->Controls->Add(this->lblTipoPrestamo);
			this->Controls->Add(this->lblDia);
			this->Controls->Add(this->lblNombreEmpleado);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->lblTotalPagar);
			this->Controls->Add(this->lblPrestamo);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->lblMembresiaCliente);
			this->Controls->Add(this->lblTipoMembresia);
			this->Controls->Add(this->lblFecha);
			this->Controls->Add(this->lblEmpleado);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->lblClienteNombre);
			this->Controls->Add(this->lblCliente);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lblDatos);
			this->Controls->Add(this->cboCliente);
			this->Controls->Add(this->lblIDCliente);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->lblFactura);
			this->Controls->Add(this->lblTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmFactura";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Factura";
			this->Load += gcnew System::EventHandler(this, &frmFactura::frmFactura_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void frmFactura_Load(System::Object^ sender, System::EventArgs^ e) {
		ofstream archivoFacturas("Facturas.dat", ios::binary | ios::app | ios::out);
		if (!archivoFacturas)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}

		ifstream archivoPrestamoEntrada("Prestamos.dat", ios::binary | ios::app | ios::in);
		if (!archivoPrestamoEntrada)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		Prestamo leerPrestamo;
		archivoPrestamoEntrada.read(reinterpret_cast<char*>(&leerPrestamo),
			sizeof(Prestamo));
		while (!archivoPrestamoEntrada.eof())
		{
			std::string Clienteid = to_string(leerPrestamo.obtenerIDcliente());
			System::String^ ID = marshal_as<System::String^>(Clienteid);
			cboCliente->Items->Add(ID); 
			archivoPrestamoEntrada.read(reinterpret_cast<char*>(&leerPrestamo),
				sizeof(Prestamo));
		}
		archivoPrestamoEntrada.close();
	}

private: System::Void cboCliente_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	ifstream archivoClienteEntrada("Clientes.dat", ios::binary | ios::app | ios::in);
	if (!archivoClienteEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}

	ifstream archivoPrestamoEntrada("Prestamos.dat", ios::binary | ios::app | ios::in);
	if (!archivoPrestamoEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	ifstream archivoDañosEntrada("Daños.dat", ios::binary | ios::app | ios::in);
	if (!archivoDañosEntrada)
	{
		MessageBox::Show("No se pudo crear el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
	ifstream ArchivoEmpleadoEntrada("Empleados.dat", ios::binary | ios::app | ios::in);
	if (!ArchivoEmpleadoEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


	System::String^ IDprestamo = cboCliente->SelectedItem->ToString();
	txtID->Text = IDprestamo;
	Cliente leerPersona;
	archivoClienteEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Cliente));
	Factura factura;
	Prestamo leerPrestamo;
	archivoPrestamoEntrada.read(reinterpret_cast<char*>(&leerPrestamo),
		sizeof(Prestamo));

	Daño leerDaño;
	archivoDañosEntrada.read(reinterpret_cast<char*>(&leerDaño), sizeof(Daño));

	while ((!archivoClienteEntrada.eof()) && (!archivoPrestamoEntrada.eof()))
	{
		std::string id = to_string(leerPersona.obtenerID());
		System::String^ id1 = marshal_as<System::String^>(id);
		std::string id2 = to_string(leerPrestamo.obtener_Daño());
		System::String^ ID2 = marshal_as<System::String^>(id2);
		if (id1 == IDprestamo)
		{
			std::string nombre = leerPersona.obtenerPrimerNombre();
			std::string apellido = leerPersona.obtenerApellidoPaterno();
			std::string membre = leerPersona.obtenerTipoMembresia();
			System::String^ membresia = marshal_as<System::String^>(membre);
			System::String^ nombrep = marshal_as<System::String^>(nombre);
			System::String^ apellidop = marshal_as<System::String^>(apellido);
			std::string tipopresta = leerPrestamo.obtenerTipoPrestamo();
			System::String^ tipo = marshal_as<System::String^>(tipopresta);

			std::string tipoDaño = leerPrestamo.obtener_TipoDaño();
			System::String^ TipoDaño = marshal_as<System::String^>(tipoDaño);

			lblMembresiaCliente->Text = membresia;
			lblClienteNombre->Text = nombrep;
			lblClienteApellido->Text = apellidop;
			lblTipoPrestamo->Text = tipo;
			lblTipoDaño->Text = TipoDaño;


			int dias_alquiler = leerPrestamo.obtenerDias();
			double costoDaño = leerPrestamo.obtenerCostoDaño();
			double costoDia = leerPrestamo.obtenerCostoDia();
			//////
			factura.calcularTotal(costoDia, costoDaño, dias_alquiler);
			lblPago->Text = String::Format("{0:F}", factura.obtenerTotal());
			///////

		}

		archivoPrestamoEntrada.read(reinterpret_cast<char*>(&leerPrestamo),
			sizeof(Prestamo));
		archivoClienteEntrada.read(reinterpret_cast<char*>(&leerPersona), sizeof(Cliente));
	}


	lblDia->Text = "11   de";
	lblMes->Text = "Agosto,";
	lblAño->Text = "2021";

	Empleado leerEmpleado;
	ArchivoEmpleadoEntrada.read(reinterpret_cast<char*>(&leerEmpleado),
		sizeof(Empleado));
	while (!ArchivoEmpleadoEntrada.eof()) {
		std::string nombre = leerEmpleado.obtenerPrimerNombre();
		std::string apellido = leerEmpleado.obtenerApellidoPaterno();
		System::String^ Nombre = marshal_as<System::String^>(nombre);
		System::String^ Apellido = marshal_as<System::String^>(apellido);
		lblNombreEmpleado->Text = Nombre;
		lblEmpleadoApellido->Text = Apellido; 
		ArchivoEmpleadoEntrada.read(reinterpret_cast<char*>(&leerEmpleado),
			sizeof(Empleado));
	}
	

}
	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		ofstream archivoFacturaSalida("Facturas.dat", ios::binary | ios::app | ios::out);
		if (!archivoFacturaSalida)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		ifstream archivoClienteEntrada("Clientes.dat", ios::binary | ios::app | ios::in);
		if (!archivoClienteEntrada)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		ifstream ArchivoEmpleadoEntrada("Empleados.dat", ios::binary | ios::app | ios::in);
		if (!ArchivoEmpleadoEntrada)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		ifstream archivoPrestamoEntrada("Prestamos.dat", ios::binary | ios::app | ios::in);
		if (!archivoPrestamoEntrada)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		Cliente leerCliente;
		archivoClienteEntrada.read(reinterpret_cast<char*>(&leerCliente),
			sizeof(Cliente));
		Empleado leerEmpleado;
		ArchivoEmpleadoEntrada.read(reinterpret_cast<char*>(&leerEmpleado),
			sizeof(Empleado));
		Prestamo leerPrestamo;
		archivoPrestamoEntrada.read(reinterpret_cast<char*>(&leerPrestamo),
			sizeof(Prestamo));

		while (!archivoClienteEntrada.eof()) {
				
			while (!ArchivoEmpleadoEntrada.eof()) {
				while (!archivoPrestamoEntrada.eof()) {
					std::string id = to_string(leerCliente.obtenerIDcliente());
					System::String^ ID = marshal_as<System::String^>(id);
					if (ID == txtID->Text)
					{
						std::string nombre = leerCliente.obtenerPrimerNombre();
						std::string membre = leerCliente.obtenerTipoMembresia();
						System::String^ membresia = marshal_as<System::String^>(membre);
						System::String^ nombrep = marshal_as<System::String^>(nombre);
						int id = Convert::ToInt32(leerCliente.obtenerIDcliente());
						

						std::string nombre_e = leerEmpleado.obtenerPrimerNombre();
						System::String^ Nombre_e = marshal_as<System::String^>(nombre_e);
						ArchivoEmpleadoEntrada.read(reinterpret_cast<char*>(&leerEmpleado),
							sizeof(Empleado));


						std::string tipopresta = leerPrestamo.obtenerTipoPrestamo();
						System::String^ tipo = marshal_as<System::String^>(tipopresta);
						std::string tipo2 = leerPrestamo.obtener_TipoDaño();
						System::String^ tipodaño = marshal_as<System::String^>(tipo2);
						archivoPrestamoEntrada.read(reinterpret_cast<char*>(&leerPrestamo),
							sizeof(Prestamo));

						int f_id = Convert::ToInt32(txtID->Text);

						Factura factura(f_id, id, nombre, membre, nombre_e, tipopresta, tipo2);  
						archivoFacturaSalida.write(reinterpret_cast<char*>(&factura),
							sizeof(Factura));
						archivoFacturaSalida.close();
						txtID->Text = "";
						cboCliente->Text = "";
						lblDia->Text = "";
						lblMes->Text = "";
						lblAño->Text = "";
						lblPago->Text = "";
						lblMembresiaCliente->Text = "";
						lblClienteNombre->Text = "";
						lblClienteApellido->Text = "";
						lblNombreEmpleado->Text = "";
						lblEmpleadoApellido->Text = "";
						lblTipoPrestamo->Text = "";
						lblTipoDaño->Text = "";

					}
					archivoPrestamoEntrada.read(reinterpret_cast<char*>(&leerPrestamo),
						sizeof(Prestamo));
				}
				ArchivoEmpleadoEntrada.read(reinterpret_cast<char*>(&leerEmpleado),
					sizeof(Empleado)); 
			}
			archivoClienteEntrada.read(reinterpret_cast<char*>(&leerCliente),
				sizeof(Cliente));
		}
	}

	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	 frmListaFactura^ listaFactura = gcnew frmListaFactura;
			   listaFactura->Show();
			   ifstream archivoFacturaEntrada("Facturas.dat", ios::binary | ios::app | ios::in);
			   if (!archivoFacturaEntrada)
			   {
				   MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
			   Factura leerFactura;
			   archivoFacturaEntrada.read(reinterpret_cast<char*>(&leerFactura),
				   sizeof(Factura));
			   while (!archivoFacturaEntrada.eof())
			   {
				   std::string idf = to_string(leerFactura.obtenerFacturaID());
				   std::string idc = to_string(leerFactura.obtenerIDcliente());
				   System::String^ cliente = marshal_as<System::String^>(leerFactura.obtenerPrimerNombre());
				   System::String^ membresia = marshal_as<System::String^>(leerFactura.obtenerTipoMembresia());
				   System::String^ empleado = marshal_as<System::String^>(leerFactura.obtenerEmpleadoNombre());
				   System::String^ prestamo = marshal_as<System::String^>(leerFactura.obtenerPrestamo());
				   System::String^ IDF = marshal_as<System::String^>(idf);
				   System::String^ IDC = marshal_as<System::String^>(idc);
				   
				   System::String^ daño = marshal_as<System::String^>(leerFactura.obtener_TipoDaño()); 

				   listaFactura->dgvFactura->Rows->Add(IDF, cliente, membresia, empleado, prestamo, daño); 
				   archivoFacturaEntrada.read(reinterpret_cast<char*>(&leerFactura),
					   sizeof(Factura));
			   }

	}
};
}

