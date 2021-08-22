#pragma once
#include "frmInventario.h"
#include "Proveedor.h"
#include "Empleado.h"
#include "Recibido.h"
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
	/// Resumen de frmRecibidos
	/// </summary>
	public ref class frmRecibidos : public System::Windows::Forms::Form
	{
	public:
		frmRecibidos(void)
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
		~frmRecibidos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegistrarRecibido;
	protected:
	private: System::Windows::Forms::Button^ btnMostrarRecibido;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::Label^ lblHora;
	private: System::Windows::Forms::ComboBox^ cboEncargado;
	private: System::Windows::Forms::ComboBox^ cboProveedor;


	private: System::Windows::Forms::Label^ lblEmpleado;
	private: System::Windows::Forms::Label^ lblProveedor;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtFecha;
	private: System::Windows::Forms::TextBox^ txtHora;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtCantidadL;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmRecibidos::typeid));
			this->btnRegistrarRecibido = (gcnew System::Windows::Forms::Button());
			this->btnMostrarRecibido = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblHora = (gcnew System::Windows::Forms::Label());
			this->cboEncargado = (gcnew System::Windows::Forms::ComboBox());
			this->cboProveedor = (gcnew System::Windows::Forms::ComboBox());
			this->lblEmpleado = (gcnew System::Windows::Forms::Label());
			this->lblProveedor = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtFecha = (gcnew System::Windows::Forms::TextBox());
			this->txtHora = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCantidadL = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRegistrarRecibido
			// 
			this->btnRegistrarRecibido->BackColor = System::Drawing::Color::MediumAquamarine;
			this->btnRegistrarRecibido->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrarRecibido->FlatAppearance->BorderSize = 2;
			this->btnRegistrarRecibido->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrarRecibido->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrarRecibido.Image")));
			this->btnRegistrarRecibido->Location = System::Drawing::Point(382, 317);
			this->btnRegistrarRecibido->Name = L"btnRegistrarRecibido";
			this->btnRegistrarRecibido->Size = System::Drawing::Size(103, 50);
			this->btnRegistrarRecibido->TabIndex = 0;
			this->btnRegistrarRecibido->Text = L"Registrar";
			this->btnRegistrarRecibido->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrarRecibido->UseVisualStyleBackColor = false;
			this->btnRegistrarRecibido->Click += gcnew System::EventHandler(this, &frmRecibidos::btnRegistrarRecibido_Click);
			// 
			// btnMostrarRecibido
			// 
			this->btnMostrarRecibido->BackColor = System::Drawing::Color::MediumAquamarine;
			this->btnMostrarRecibido->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrarRecibido->FlatAppearance->BorderSize = 2;
			this->btnMostrarRecibido->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrarRecibido->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrarRecibido.Image")));
			this->btnMostrarRecibido->Location = System::Drawing::Point(381, 394);
			this->btnMostrarRecibido->Name = L"btnMostrarRecibido";
			this->btnMostrarRecibido->Size = System::Drawing::Size(104, 48);
			this->btnMostrarRecibido->TabIndex = 1;
			this->btnMostrarRecibido->Text = L"Mostrar Encargos";
			this->btnMostrarRecibido->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMostrarRecibido->UseVisualStyleBackColor = false;
			this->btnMostrarRecibido->Click += gcnew System::EventHandler(this, &frmRecibidos::btnMostrarRecibido_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(188, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Inventario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(166, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Registro de paquetes recibidos";
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblID->Location = System::Drawing::Point(33, 144);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(95, 13);
			this->lblID->TabIndex = 4;
			this->lblID->Text = L"ID del paquete:";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFecha->Location = System::Drawing::Point(82, 201);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(46, 13);
			this->lblFecha->TabIndex = 5;
			this->lblFecha->Text = L"Fecha:";
			// 
			// lblHora
			// 
			this->lblHora->AutoSize = true;
			this->lblHora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHora->Location = System::Drawing::Point(82, 258);
			this->lblHora->Name = L"lblHora";
			this->lblHora->Size = System::Drawing::Size(38, 13);
			this->lblHora->TabIndex = 6;
			this->lblHora->Text = L"Hora:";
			// 
			// cboEncargado
			// 
			this->cboEncargado->FormattingEnabled = true;
			this->cboEncargado->Location = System::Drawing::Point(364, 136);
			this->cboEncargado->Name = L"cboEncargado";
			this->cboEncargado->Size = System::Drawing::Size(121, 21);
			this->cboEncargado->TabIndex = 7;
			// 
			// cboProveedor
			// 
			this->cboProveedor->FormattingEnabled = true;
			this->cboProveedor->Location = System::Drawing::Point(364, 193);
			this->cboProveedor->Name = L"cboProveedor";
			this->cboProveedor->Size = System::Drawing::Size(121, 21);
			this->cboProveedor->TabIndex = 8;
			// 
			// lblEmpleado
			// 
			this->lblEmpleado->AutoSize = true;
			this->lblEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmpleado->Location = System::Drawing::Point(286, 144);
			this->lblEmpleado->Name = L"lblEmpleado";
			this->lblEmpleado->Size = System::Drawing::Size(72, 13);
			this->lblEmpleado->TabIndex = 9;
			this->lblEmpleado->Text = L"Encargado:";
			// 
			// lblProveedor
			// 
			this->lblProveedor->AutoSize = true;
			this->lblProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblProveedor->Location = System::Drawing::Point(289, 201);
			this->lblProveedor->Name = L"lblProveedor";
			this->lblProveedor->Size = System::Drawing::Size(69, 13);
			this->lblProveedor->TabIndex = 10;
			this->lblProveedor->Text = L"Proveedor:";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(125, 141);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(106, 20);
			this->txtID->TabIndex = 11;
			// 
			// txtFecha
			// 
			this->txtFecha->Location = System::Drawing::Point(125, 198);
			this->txtFecha->Name = L"txtFecha";
			this->txtFecha->Size = System::Drawing::Size(106, 20);
			this->txtFecha->TabIndex = 12;
			// 
			// txtHora
			// 
			this->txtHora->Location = System::Drawing::Point(125, 255);
			this->txtHora->Name = L"txtHora";
			this->txtHora->Size = System::Drawing::Size(106, 20);
			this->txtHora->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 287);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(269, 186);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(245, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Cantidad de libros:";
			// 
			// txtCantidadL
			// 
			this->txtCantidadL->Location = System::Drawing::Point(364, 253);
			this->txtCantidadL->Name = L"txtCantidadL";
			this->txtCantidadL->Size = System::Drawing::Size(121, 20);
			this->txtCantidadL->TabIndex = 16;
			// 
			// frmRecibidos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(560, 505);
			this->Controls->Add(this->txtCantidadL);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtHora);
			this->Controls->Add(this->txtFecha);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->lblProveedor);
			this->Controls->Add(this->lblEmpleado);
			this->Controls->Add(this->cboProveedor);
			this->Controls->Add(this->cboEncargado);
			this->Controls->Add(this->lblHora);
			this->Controls->Add(this->lblFecha);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMostrarRecibido);
			this->Controls->Add(this->btnRegistrarRecibido);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmRecibidos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recibidos";
			this->Load += gcnew System::EventHandler(this, &frmRecibidos::frmRecibidos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMostrarRecibido_Click(System::Object^ sender, System::EventArgs^ e) {
		frmInventario^ listaInventario = gcnew frmInventario;
		listaInventario->Show();
		ifstream inventarioEntrada("Inventario.dat", ios::binary | ios::app | ios::in);
		if (!inventarioEntrada)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		Recibido inventario;
		inventarioEntrada.read(reinterpret_cast<char*>(&inventario), sizeof(Recibido));
		while (!inventarioEntrada.eof())
		{
			std::string id = to_string(inventario.obtenerID());
			std::string cant = to_string(inventario.obtenerCantidadL());
			System::String^ ID = marshal_as<System::String^ >(id);
			System::String^ cantidad = marshal_as<System::String^ >(cant);
			System::String^ fecha = marshal_as<System::String^>(inventario.obtenerFecha());
			System::String^ hora = marshal_as<System::String^>(inventario.obtenerHora());
			System::String^ encargado = marshal_as<System::String^>(inventario.obtenerEncargado());
			System::String^ proveedor = marshal_as<System::String^>(inventario.obtenerNombreProveedor());
			listaInventario->dgvInventario->Rows->Add(ID, fecha, proveedor, cantidad, encargado);
			inventarioEntrada.read(reinterpret_cast<char*>(&inventario), sizeof(Recibido));
		}

	}
private: System::Void frmRecibidos_Load(System::Object^ sender, System::EventArgs^ e) {
	ofstream archivoRecibidos("Inventario.dat", ios::binary | ios::app | ios::out);
	if (!archivoRecibidos)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	ifstream empleadoEntrada("Empleados.dat", ios::binary | ios::app | ios::in);
	if (!empleadoEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	ifstream proveedorEntrada("Proveedores.dat", ios::binary | ios::app | ios::in);
	if (!proveedorEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	Empleado empleado;
	empleadoEntrada.read(reinterpret_cast<char*>(&empleado), sizeof(Empleado));
	while (!empleadoEntrada.eof())
	{
		System::String^ nombreEmpleado = marshal_as<System::String^>(empleado.obtenerPrimerNombre());
		cboEncargado->Items->Add(nombreEmpleado);
		empleadoEntrada.read(reinterpret_cast<char*>(&empleado), sizeof(Empleado));
	}
	Proveedor proveedor;
	proveedorEntrada.read(reinterpret_cast<char*>(&proveedor), sizeof(Proveedor));
	while (!proveedorEntrada.eof())
	{
		System::String^ nombreProveedor = marshal_as<System::String^>(proveedor.obtenerNombre());
		cboProveedor->Items->Add(nombreProveedor);
		proveedorEntrada.read(reinterpret_cast<char*>(&proveedor), sizeof(Proveedor));
	}

}
private: System::Void btnRegistrarRecibido_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream inventarioSalida("Inventario.dat", ios::binary | ios::app | ios::out);
		if (!inventarioSalida)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		int id = Convert::ToInt32(txtID->Text);
		int cantidad = Convert::ToInt32(txtCantidadL->Text);
		std::string fecha = marshal_as<std::string>(txtFecha->Text);
		std::string hora = marshal_as<std::string>(txtHora->Text);
		std::string encargado = marshal_as<std::string>(cboEncargado->SelectedItem->ToString());
		std::string proveedor = marshal_as<std::string>(cboProveedor->SelectedItem->ToString());
		if (txtID->Text == "")
		{
			throw gcnew Exception("Ingrese ID valido");
		}
		if (txtCantidadL->Text == "")
		{
			throw gcnew Exception("Ingrese cantidad de libros");
		}
		else if (cantidad < 1)
		{
			throw gcnew Exception("cantida debe ser mayor a 0");
		}
		if (txtFecha->Text == "")
		{
			throw gcnew Exception("Ingrese Fecha DD/MM/AA");
		}
		else if (txtFecha->Text->Length < 6)
		{
			throw gcnew Exception("Fecha demasiado corta");
		}
		if (txtHora->Text == "")
		{
			throw gcnew Exception("Ingrese Hora 23:59");
		}
		else if (txtHora->Text->Length < 5)
		{
			throw gcnew Exception("Hora demasiado corta");
		}
		if (cboEncargado->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione encargado");
		}
		if (cboProveedor->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione encargado");
		}
		Recibido inventario(id, cantidad, encargado, fecha, proveedor, hora);
		inventarioSalida.write(reinterpret_cast<const char*>(&inventario), sizeof(Recibido));
		inventarioSalida.close();
		txtCantidadL->Text = "";
		txtFecha->Text = "";
		txtHora->Text = "";
		txtID->Text = "";
		cboEncargado->Text = "";
		cboProveedor->Text = "";
	}
	catch (Exception^ excep)
	{
		MessageBox::Show("Campos incompletos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	

}
};
}
