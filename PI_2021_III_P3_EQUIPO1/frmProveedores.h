#pragma once
#include "frmListaProveedores.h"
#include "Proveedor.h"
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
	/// Resumen de frmProveedores
	/// </summary>
	public ref class frmProveedores : public System::Windows::Forms::Form
	{
	public:
		frmProveedores(void)
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
		~frmProveedores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Button^ btnMostrar;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lblIDProveedor;
	private: System::Windows::Forms::Label^ lblNombreProveedor;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::Label^ lblTelefono;
	private: System::Windows::Forms::Label^ lblCategoria;
	private: System::Windows::Forms::Label^ lblRTN;
	private: System::Windows::Forms::Label^ lblCiudad;
	private: System::Windows::Forms::Label^ lblDireccion;
	private: System::Windows::Forms::TextBox^ txtIDProveedor;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtFecha;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: System::Windows::Forms::TextBox^ txtCategoria;
	private: System::Windows::Forms::TextBox^ txtRTN;
	private: System::Windows::Forms::TextBox^ txtCiudad;
	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmProveedores::typeid));
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->lblIDProveedor = (gcnew System::Windows::Forms::Label());
			this->lblNombreProveedor = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblTelefono = (gcnew System::Windows::Forms::Label());
			this->lblCategoria = (gcnew System::Windows::Forms::Label());
			this->lblRTN = (gcnew System::Windows::Forms::Label());
			this->lblCiudad = (gcnew System::Windows::Forms::Label());
			this->lblDireccion = (gcnew System::Windows::Forms::Label());
			this->txtIDProveedor = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtFecha = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtCategoria = (gcnew System::Windows::Forms::TextBox());
			this->txtRTN = (gcnew System::Windows::Forms::TextBox());
			this->txtCiudad = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->BackColor = System::Drawing::Color::SeaGreen;
			this->btnRegistrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrar->FlatAppearance->BorderSize = 2;
			this->btnRegistrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrar.Image")));
			this->btnRegistrar->Location = System::Drawing::Point(260, 357);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(116, 47);
			this->btnRegistrar->TabIndex = 0;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrar->UseVisualStyleBackColor = false;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &frmProveedores::btnRegistrar_Click);
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::SeaGreen;
			this->btnMostrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrar->FlatAppearance->BorderSize = 2;
			this->btnMostrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrar.Image")));
			this->btnMostrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrar->Location = System::Drawing::Point(382, 357);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(109, 47);
			this->btnMostrar->TabIndex = 1;
			this->btnMostrar->Text = L"Mostrar";
			this->btnMostrar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmProveedores::btnMostrar_Click);
			// 
			// lblIDProveedor
			// 
			this->lblIDProveedor->AutoSize = true;
			this->lblIDProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDProveedor->Location = System::Drawing::Point(91, 189);
			this->lblIDProveedor->Name = L"lblIDProveedor";
			this->lblIDProveedor->Size = System::Drawing::Size(32, 13);
			this->lblIDProveedor->TabIndex = 2;
			this->lblIDProveedor->Text = L"ID : ";
			// 
			// lblNombreProveedor
			// 
			this->lblNombreProveedor->AutoSize = true;
			this->lblNombreProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreProveedor->Location = System::Drawing::Point(67, 231);
			this->lblNombreProveedor->Name = L"lblNombreProveedor";
			this->lblNombreProveedor->Size = System::Drawing::Size(58, 13);
			this->lblNombreProveedor->TabIndex = 3;
			this->lblNombreProveedor->Text = L"Nombre: ";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFecha->Location = System::Drawing::Point(74, 270);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(50, 13);
			this->lblFecha->TabIndex = 4;
			this->lblFecha->Text = L"Fecha: ";
			// 
			// lblTelefono
			// 
			this->lblTelefono->AutoSize = true;
			this->lblTelefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTelefono->Location = System::Drawing::Point(60, 313);
			this->lblTelefono->Name = L"lblTelefono";
			this->lblTelefono->Size = System::Drawing::Size(65, 13);
			this->lblTelefono->TabIndex = 5;
			this->lblTelefono->Text = L"Telefono: ";
			// 
			// lblCategoria
			// 
			this->lblCategoria->AutoSize = true;
			this->lblCategoria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCategoria->Location = System::Drawing::Point(56, 357);
			this->lblCategoria->Name = L"lblCategoria";
			this->lblCategoria->Size = System::Drawing::Size(69, 13);
			this->lblCategoria->TabIndex = 6;
			this->lblCategoria->Text = L"Categoria: ";
			// 
			// lblRTN
			// 
			this->lblRTN->AutoSize = true;
			this->lblRTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRTN->Location = System::Drawing::Point(318, 189);
			this->lblRTN->Name = L"lblRTN";
			this->lblRTN->Size = System::Drawing::Size(45, 13);
			this->lblRTN->TabIndex = 7;
			this->lblRTN->Text = L"RTN : ";
			// 
			// lblCiudad
			// 
			this->lblCiudad->AutoSize = true;
			this->lblCiudad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCiudad->Location = System::Drawing::Point(309, 231);
			this->lblCiudad->Name = L"lblCiudad";
			this->lblCiudad->Size = System::Drawing::Size(54, 13);
			this->lblCiudad->TabIndex = 8;
			this->lblCiudad->Text = L"Ciudad: ";
			// 
			// lblDireccion
			// 
			this->lblDireccion->AutoSize = true;
			this->lblDireccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDireccion->Location = System::Drawing::Point(297, 270);
			this->lblDireccion->Name = L"lblDireccion";
			this->lblDireccion->Size = System::Drawing::Size(69, 13);
			this->lblDireccion->TabIndex = 9;
			this->lblDireccion->Text = L"Direccion: ";
			// 
			// txtIDProveedor
			// 
			this->txtIDProveedor->Location = System::Drawing::Point(118, 186);
			this->txtIDProveedor->Name = L"txtIDProveedor";
			this->txtIDProveedor->Size = System::Drawing::Size(100, 20);
			this->txtIDProveedor->TabIndex = 10;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(118, 228);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 11;
			// 
			// txtFecha
			// 
			this->txtFecha->Location = System::Drawing::Point(118, 267);
			this->txtFecha->Name = L"txtFecha";
			this->txtFecha->Size = System::Drawing::Size(100, 20);
			this->txtFecha->TabIndex = 12;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(118, 310);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(100, 20);
			this->txtTelefono->TabIndex = 13;
			// 
			// txtCategoria
			// 
			this->txtCategoria->Location = System::Drawing::Point(118, 354);
			this->txtCategoria->Name = L"txtCategoria";
			this->txtCategoria->Size = System::Drawing::Size(100, 20);
			this->txtCategoria->TabIndex = 14;
			// 
			// txtRTN
			// 
			this->txtRTN->Location = System::Drawing::Point(358, 186);
			this->txtRTN->Name = L"txtRTN";
			this->txtRTN->Size = System::Drawing::Size(100, 20);
			this->txtRTN->TabIndex = 15;
			// 
			// txtCiudad
			// 
			this->txtCiudad->Location = System::Drawing::Point(358, 228);
			this->txtCiudad->Name = L"txtCiudad";
			this->txtCiudad->Size = System::Drawing::Size(100, 20);
			this->txtCiudad->TabIndex = 16;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(358, 267);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(100, 20);
			this->txtDireccion->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(98, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 33);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Registro de Proveedores";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(202, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(112, 135);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// frmProveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(530, 428);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->txtCiudad);
			this->Controls->Add(this->txtRTN);
			this->Controls->Add(this->txtCategoria);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtFecha);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtIDProveedor);
			this->Controls->Add(this->lblDireccion);
			this->Controls->Add(this->lblCiudad);
			this->Controls->Add(this->lblRTN);
			this->Controls->Add(this->lblCategoria);
			this->Controls->Add(this->lblTelefono);
			this->Controls->Add(this->lblFecha);
			this->Controls->Add(this->lblNombreProveedor);
			this->Controls->Add(this->lblIDProveedor);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnRegistrar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmProveedores";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro de proveedores";
			this->Load += gcnew System::EventHandler(this, &frmProveedores::frmProveedores_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try
		{
			frmListaProveedores^ listaProveedores = gcnew frmListaProveedores;
			listaProveedores->Show();
			ifstream archivoProveedoresEntrada("Proveedores.dat", ios::binary | ios::app | ios::in);
			if (!archivoProveedoresEntrada)
			{
				MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
			}
			Proveedor leerProveedor;
			archivoProveedoresEntrada.read(reinterpret_cast<char*>(&leerProveedor), sizeof(Proveedor));
			while (!archivoProveedoresEntrada.eof())
			{
				std::string id = to_string(leerProveedor.obtenerID());
				System::String^ ID = marshal_as<System::String^>(id);
				System::String^ nombre = marshal_as<System::String^>(leerProveedor.obtenerNombre());
				System::String^ fecha = marshal_as<System::String^>(leerProveedor.obtenerFecha());
				std::string tel = to_string(leerProveedor.obtenerTelefono());
				System::String^ telefono = marshal_as<System::String^>(tel);
				System::String^ categoria = marshal_as<System::String^>(leerProveedor.obtenerCategoria());
				System::String^ RTN = marshal_as<System::String^>(leerProveedor.obtenerRtn());
				System::String^ ciudad = marshal_as<System::String^>(leerProveedor.obtenerCiudad());
				System::String^ direccion = marshal_as<System::String^>(leerProveedor.obtenerDireccion());
				listaProveedores->dgvProveedores->Rows->Add(ID, nombre, telefono, RTN, fecha, ciudad, direccion);
				archivoProveedoresEntrada.read(reinterpret_cast<char*>(&leerProveedor), sizeof(Proveedor));
			}
		}
		catch (Exception^ excep)
		{
			MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void frmProveedores_Load(System::Object^ sender, System::EventArgs^ e) {
	ofstream archivoProveedores("Proveedores.dat", ios::binary | ios::app | ios::out);
	if (!archivoProveedores)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try
	{
		ofstream archivoProveedoresSalida("Proveedores.dat", ios::binary | ios::app | ios::out);
		if (!archivoProveedoresSalida)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo");
		}
		int id = Convert::ToInt32(txtIDProveedor->Text);
		System::String^ nom = txtNombre->Text;
		System::String^ fec = txtFecha->Text;
		int tel = Convert::ToInt32(txtTelefono->Text);
		System::String^ cat = txtCategoria->Text;
		System::String^ rtn = txtRTN->Text;
		System::String^ ciud = txtCiudad->Text;
		System::String^ dir = txtDireccion->Text;
		if (id.MinValue == 1)
		{
			throw gcnew Exception("Ingrese ID valido");
		}
		if (nom == "")
		{
			throw gcnew Exception("Ingrese nombre");
		}
		else if (nom->Length < 4)
		{
			throw gcnew Exception("La nombre demasiado corto");
		}
		if (fec == "")
		{
			throw gcnew Exception("Ingrese Fecha");
		}
		else if (fec->Length < 6)
		{
			throw gcnew Exception("Fecha demasiado corta");
		}
		if (txtTelefono->Text == "")
		{
			throw gcnew Exception("Ingrese Telefono valido");
		}
		if (cat == "")
		{
			throw gcnew Exception("Ingrese Categoria");
		}
		else if (cat->Length < 1)
		{
			throw gcnew Exception("Categoria ingresada demasiado corto");
		}
		if (rtn == "")
		{
			throw gcnew Exception("Ingrese RTN");
		}
		else if (rtn->Length < 15)
		{
			throw gcnew Exception("RTN demasiado corto");
		}
		if (ciud == "")
		{
			throw gcnew Exception("Ingrese Ciudad");
		}
		else if (ciud->Length < 5)
		{
			throw gcnew Exception("Ciudad ingresada demasiado corta");
		}
		if (dir == "")
		{
			throw gcnew Exception("Ingrese Dirección");
		}
		else if (dir->Length < 5)
		{
			throw gcnew Exception("Dirección demasiado corta");
		}
		std::string nombre = marshal_as<std::string>(nom);
		std::string fecha = marshal_as<std::string>(fec);
		std::string categoria = marshal_as<std::string>(cat);
		std::string RTN = marshal_as<std::string>(rtn);
		std::string ciudad = marshal_as<std::string>(ciud);
		std::string direccion = marshal_as<std::string>(dir);
		Proveedor proveedor(id, tel, nombre, RTN, fecha, direccion, ciudad, categoria);
		archivoProveedoresSalida.write(reinterpret_cast<const char*>(&proveedor), sizeof(Proveedor));
		archivoProveedoresSalida.close();
		txtCategoria->Text = "";
		txtCiudad->Text = "";
		txtDireccion->Text = "";
		txtFecha->Text = "";
		txtIDProveedor->Text = "";
		txtNombre->Text = "";
		txtRTN->Text = "";
		txtTelefono->Text = "";
	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
