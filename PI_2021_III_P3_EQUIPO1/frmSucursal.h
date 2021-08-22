#pragma once
#include "frmListaSucursales.h"
#include "Sucursal.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <msclr/marshal_cppstd.h>

namespace PI2021IIIP3EQUIPO1 {
	using namespace std;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmSucursal
	/// </summary>
	public ref class frmSucursal : public System::Windows::Forms::Form
	{
	public:
		frmSucursal(void)
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
		~frmSucursal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Label^ lblCiudad;
	private: System::Windows::Forms::Label^ lblDireccion;
	private: System::Windows::Forms::Label^ lblEmpleados;
	private: System::Windows::Forms::ComboBox^ cboCiudad;

	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::TextBox^ txtCantEmpleados;
	private: System::Windows::Forms::Button^ btnAgregar;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Button^ btnMostrar;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSucursal::typeid));
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->lblCiudad = (gcnew System::Windows::Forms::Label());
			this->lblDireccion = (gcnew System::Windows::Forms::Label());
			this->lblEmpleados = (gcnew System::Windows::Forms::Label());
			this->cboCiudad = (gcnew System::Windows::Forms::ComboBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtCantEmpleados = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblId->Location = System::Drawing::Point(107, 43);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(89, 15);
			this->lblId->TabIndex = 0;
			this->lblId->Text = L"ID Sucursal :";
			// 
			// lblCiudad
			// 
			this->lblCiudad->AutoSize = true;
			this->lblCiudad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCiudad->Location = System::Drawing::Point(136, 95);
			this->lblCiudad->Name = L"lblCiudad";
			this->lblCiudad->Size = System::Drawing::Size(60, 15);
			this->lblCiudad->TabIndex = 1;
			this->lblCiudad->Text = L"Ciudad :";
			// 
			// lblDireccion
			// 
			this->lblDireccion->AutoSize = true;
			this->lblDireccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDireccion->Location = System::Drawing::Point(120, 130);
			this->lblDireccion->Name = L"lblDireccion";
			this->lblDireccion->Size = System::Drawing::Size(76, 15);
			this->lblDireccion->TabIndex = 2;
			this->lblDireccion->Text = L"Dirección :";
			// 
			// lblEmpleados
			// 
			this->lblEmpleados->AutoSize = true;
			this->lblEmpleados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmpleados->Location = System::Drawing::Point(36, 160);
			this->lblEmpleados->Name = L"lblEmpleados";
			this->lblEmpleados->Size = System::Drawing::Size(160, 15);
			this->lblEmpleados->TabIndex = 3;
			this->lblEmpleados->Text = L"Cantiad de Empleados :";
			// 
			// cboCiudad
			// 
			this->cboCiudad->FormattingEnabled = true;
			this->cboCiudad->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Tegucigalpa", L"Comayagua", L"Ceiba" });
			this->cboCiudad->Location = System::Drawing::Point(202, 95);
			this->cboCiudad->Name = L"cboCiudad";
			this->cboCiudad->Size = System::Drawing::Size(155, 21);
			this->cboCiudad->TabIndex = 4;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(202, 43);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(155, 20);
			this->txtId->TabIndex = 5;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(202, 125);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(155, 20);
			this->txtDireccion->TabIndex = 6;
			// 
			// txtCantEmpleados
			// 
			this->txtCantEmpleados->Location = System::Drawing::Point(202, 160);
			this->txtCantEmpleados->Name = L"txtCantEmpleados";
			this->txtCantEmpleados->Size = System::Drawing::Size(155, 20);
			this->txtCantEmpleados->TabIndex = 7;
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::PeachPuff;
			this->btnAgregar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnAgregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Location = System::Drawing::Point(186, 231);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(93, 48);
			this->btnAgregar->TabIndex = 8;
			this->btnAgregar->Text = L"Agregar Sucursal";
			this->btnAgregar->UseVisualStyleBackColor = false;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &frmSucursal::btnAgregar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(409, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(137, 135);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(134, 69);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(62, 15);
			this->lblNombre->TabIndex = 0;
			this->lblNombre->Text = L"Nombre:";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(202, 69);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(155, 20);
			this->txtNombre->TabIndex = 5;
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::PeachPuff;
			this->btnMostrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Location = System::Drawing::Point(334, 231);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(93, 48);
			this->btnMostrar->TabIndex = 8;
			this->btnMostrar->Text = L"Mostrar Sucursales";
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmSucursal::btnMostrar_Click);
			// 
			// frmSucursal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->ClientSize = System::Drawing::Size(591, 347);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtCantEmpleados);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->cboCiudad);
			this->Controls->Add(this->lblEmpleados);
			this->Controls->Add(this->lblDireccion);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblCiudad);
			this->Controls->Add(this->lblId);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmSucursal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sucursal";
			this->Load += gcnew System::EventHandler(this, &frmSucursal::frmSucursal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void frmSucursal_Load(System::Object^ sender, System::EventArgs^ e) {
		ofstream archivoSucursal("Sucursales.dat", ios::binary | ios::app | ios::out);

		if (!archivoSucursal)
		{
			MessageBox::Show("No se pudo crear el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		txtId->Text = "";
		cboCiudad->Text = "";
		txtDireccion->Text = "";
		txtCantEmpleados->Text = "";
		txtNombre->Text = "";

	}
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream archivoSucursalSalida("Sucursales.dat", ios::binary | ios::app | ios::out);
		if (!archivoSucursalSalida)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		//variables String del sistema
		System::String^ Nombre = txtNombre->Text;
		if (cboCiudad->SelectedItem == nullptr)
		{
			throw gcnew Exception("llenar campos vacios");
		}
		System::String^ ciudad = cboCiudad->SelectedItem->ToString();
		System::String^ direccion = txtDireccion->Text;
		System::String^ empleados = txtCantEmpleados->Text;
		int ID = Convert::ToInt32(txtId->Text);

		//convertir los string
		std::string ciudadC = marshal_as<std::string>(ciudad);
		std::string direccionC = marshal_as<std::string>(direccion);
		std::string empleadosC = marshal_as<std::string>(empleados);
		std::string nombreC = marshal_as<std::string>(Nombre);
		if (ID.ToString() == "")
		{
			throw gcnew Exception("Ingrese ID de Sucursal");
		}
		if (Nombre == "")
		{
			throw gcnew Exception("Ingrese Nombre de sucursal");
		}
		else if (Nombre->Length < 5)
		{
			throw gcnew Exception("Nombre sucursal demasiado corto");
		}
		if (cboCiudad->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione Ciudad de Sucursal");
		}
		if (direccion = "")
		{
			throw gcnew Exception("Ingrese direccion de sucursal");
		}
		else if (direccion->Length < 5)
		{
			throw gcnew Exception("Dirección sucursal demasiado corto");
		}
		if (empleados == "")
		{
			throw gcnew Exception("Ingrese cantidad de Empleados");
		}
		Sucursal sucursal(ID, nombreC, ciudadC, direccionC, empleadosC);
		archivoSucursalSalida.write(reinterpret_cast<const char*>(&sucursal), sizeof(Sucursal));
		archivoSucursalSalida.close();

		txtId->Text = "";
		cboCiudad->Text = "";
		txtDireccion->Text = "";
		txtCantEmpleados->Text = "";
		txtNombre->Text = "";
	}
	catch (Exception^ excep)
	{
		MessageBox::Show("Llenar campos vacíos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	frmListaSucursales^ formularioS = gcnew frmListaSucursales;
	formularioS->Show();

	ifstream archivoSucursalEntrada;

	archivoSucursalEntrada.open("Sucursales.dat", ios::binary | ios::app | ios::in);
	if (!archivoSucursalEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
	Sucursal leerSucursal;

	archivoSucursalEntrada.read(reinterpret_cast<char*>(&leerSucursal), sizeof(Sucursal));
	while (!archivoSucursalEntrada.eof())
	{
		std::string id = to_string(leerSucursal.obtenerIDSucursal());
		System::String^ ID1 = marshal_as<System::String^>(id);
		System::String^ nombre1 = marshal_as<System::String^>(leerSucursal.obtenerNombre());
		System::String^ ciudad1 = marshal_as<System::String^>(leerSucursal.obtenerCiudad());
		System::String^ direccion1 = marshal_as<System::String^>(leerSucursal.obtenerDireccion());
		System::String^ cant1 = marshal_as<System::String^>(leerSucursal.obtenerCantEmpleados());

		formularioS->dgvListaSucursal->Rows->Add(ID1, nombre1, ciudad1, direccion1, cant1);
		archivoSucursalEntrada.read(reinterpret_cast<char*>(&leerSucursal), sizeof(Sucursal));
	}
}
};
}
