#pragma once
#include "frmListaSalaLectura.h"
#include "Empleado.h"
#include "SalaLectura.h"
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
	/// Resumen de frmSalaLectura
	/// </summary>
	public ref class frmSalaLectura : public System::Windows::Forms::Form
	{
	public:
		frmSalaLectura(void)
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
		~frmSalaLectura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::Label^ lblCapacidad;
	private: System::Windows::Forms::Label^ lblEmpleadoSalaL;
	private: System::Windows::Forms::Label^ lblDisponibilidad;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtCapacidad;







	private: System::Windows::Forms::Button^ btnRegistrar;



	private: System::Windows::Forms::ComboBox^ cboEncargadoSalaL;
	private: System::Windows::Forms::ComboBox^ cboDisponibilidad;

	private: System::Windows::Forms::Button^ btnMostrar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSalaLectura::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->lblCapacidad = (gcnew System::Windows::Forms::Label());
			this->lblEmpleadoSalaL = (gcnew System::Windows::Forms::Label());
			this->lblDisponibilidad = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtCapacidad = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->cboEncargadoSalaL = (gcnew System::Windows::Forms::ComboBox());
			this->cboDisponibilidad = (gcnew System::Windows::Forms::ComboBox());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(196, 232);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Sala de lectura";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(88, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(418, 226);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblID->Location = System::Drawing::Point(119, 304);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(24, 13);
			this->lblID->TabIndex = 4;
			this->lblID->Text = L"ID:";
			// 
			// lblCapacidad
			// 
			this->lblCapacidad->AutoSize = true;
			this->lblCapacidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCapacidad->Location = System::Drawing::Point(72, 377);
			this->lblCapacidad->Name = L"lblCapacidad";
			this->lblCapacidad->Size = System::Drawing::Size(71, 13);
			this->lblCapacidad->TabIndex = 5;
			this->lblCapacidad->Text = L"Capacidad:";
			// 
			// lblEmpleadoSalaL
			// 
			this->lblEmpleadoSalaL->AutoSize = true;
			this->lblEmpleadoSalaL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmpleadoSalaL->Location = System::Drawing::Point(288, 304);
			this->lblEmpleadoSalaL->Name = L"lblEmpleadoSalaL";
			this->lblEmpleadoSalaL->Size = System::Drawing::Size(76, 13);
			this->lblEmpleadoSalaL->TabIndex = 6;
			this->lblEmpleadoSalaL->Text = L"Encargado: ";
			// 
			// lblDisponibilidad
			// 
			this->lblDisponibilidad->AutoSize = true;
			this->lblDisponibilidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDisponibilidad->Location = System::Drawing::Point(274, 377);
			this->lblDisponibilidad->Name = L"lblDisponibilidad";
			this->lblDisponibilidad->Size = System::Drawing::Size(90, 13);
			this->lblDisponibilidad->TabIndex = 7;
			this->lblDisponibilidad->Text = L"Disponibilidad:";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(147, 301);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(111, 20);
			this->txtID->TabIndex = 8;
			// 
			// txtCapacidad
			// 
			this->txtCapacidad->Location = System::Drawing::Point(147, 374);
			this->txtCapacidad->Name = L"txtCapacidad";
			this->txtCapacidad->Size = System::Drawing::Size(111, 20);
			this->txtCapacidad->TabIndex = 9;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btnRegistrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrar->FlatAppearance->BorderSize = 2;
			this->btnRegistrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrar.Image")));
			this->btnRegistrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegistrar->Location = System::Drawing::Point(277, 434);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(114, 44);
			this->btnRegistrar->TabIndex = 12;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrar->UseVisualStyleBackColor = false;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &frmSalaLectura::btnRegistrar_Click);
			// 
			// cboEncargadoSalaL
			// 
			this->cboEncargadoSalaL->FormattingEnabled = true;
			this->cboEncargadoSalaL->Location = System::Drawing::Point(370, 304);
			this->cboEncargadoSalaL->Name = L"cboEncargadoSalaL";
			this->cboEncargadoSalaL->Size = System::Drawing::Size(121, 21);
			this->cboEncargadoSalaL->TabIndex = 13;
			this->cboEncargadoSalaL->SelectedIndexChanged += gcnew System::EventHandler(this, &frmSalaLectura::cboEncargadoSalaL_SelectedIndexChanged);
			// 
			// cboDisponibilidad
			// 
			this->cboDisponibilidad->FormattingEnabled = true;
			this->cboDisponibilidad->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Disponible", L"Ocupada" });
			this->cboDisponibilidad->Location = System::Drawing::Point(370, 374);
			this->cboDisponibilidad->Name = L"cboDisponibilidad";
			this->cboDisponibilidad->Size = System::Drawing::Size(121, 21);
			this->cboDisponibilidad->TabIndex = 14;
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btnMostrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrar->FlatAppearance->BorderSize = 2;
			this->btnMostrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrar.Image")));
			this->btnMostrar->Location = System::Drawing::Point(416, 434);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(107, 44);
			this->btnMostrar->TabIndex = 15;
			this->btnMostrar->Text = L"Mostrar";
			this->btnMostrar->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmSalaLectura::btnMostrar_Click);
			// 
			// frmSalaLectura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(590, 490);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->cboDisponibilidad);
			this->Controls->Add(this->cboEncargadoSalaL);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->txtCapacidad);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->lblDisponibilidad);
			this->Controls->Add(this->lblEmpleadoSalaL);
			this->Controls->Add(this->lblCapacidad);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmSalaLectura";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sala De Lectura";
			this->Load += gcnew System::EventHandler(this, &frmSalaLectura::frmSalaLectura_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmSalaLectura_Load(System::Object^ sender, System::EventArgs^ e) {
		ofstream archivoSalaLectura("Salas de lectura.dat", ios::binary | ios::app | ios::out);
		if (!archivoSalaLectura)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		ifstream empleado("Empleados.dat", ios::binary | ios::app | ios::in);
		if (!empleado)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		Empleado empleadoNom;
		empleado.read(reinterpret_cast<char*>(&empleadoNom), sizeof(Empleado));
		while (!empleado.eof())
		{
			std::string nomEmpleado = empleadoNom.obtenerPrimerNombre();
			System::String^ nombreEmpleado = marshal_as<System::String^>(nomEmpleado);
			cboEncargadoSalaL->Items->Add(nombreEmpleado);
			empleado.read(reinterpret_cast<char*>(&empleadoNom), sizeof(Empleado));
		}
	}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream SalaLecturaSalida("Salas de lectura.dat", ios::binary | ios::app | ios::out);
		if (!SalaLecturaSalida)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		int ID = Convert::ToInt32(txtID->Text);
		int capacidad = Convert::ToInt32(txtCapacidad->Text);
		if (txtID->Text == "")
		{
			throw gcnew Exception("Ingrese ID valido");
		}
		if (txtCapacidad->Text == "")
		{
			throw gcnew Exception("Ingrese Capacidad");
		}
		else if (capacidad < 1)
		{
			throw gcnew Exception("Capacidad debe ser mayor a 0");
		}
		if (cboDisponibilidad->SelectedText == nullptr)
		{
			throw gcnew Exception("Seleccione disponibilidad");
		}
		if (cboEncargadoSalaL->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione Encargado de Sala");
		}
		System::String^ enca = cboEncargadoSalaL->SelectedItem->ToString();
		System::String^ disp = cboDisponibilidad->SelectedItem->ToString();
		std::string encargado = marshal_as<std::string>(enca);
		std::string disponibilidad = marshal_as<std::string>(disp);
		SalaLectura sala(ID, capacidad, encargado, disponibilidad);
		SalaLecturaSalida.write(reinterpret_cast<const char*>(&sala), sizeof(SalaLectura));
		SalaLecturaSalida.close();
		txtCapacidad->Text = "";
		txtID->Text = "";
		cboDisponibilidad->Text = "";
		cboEncargadoSalaL->Text = "";

		}
	
	catch (Exception^ excep)
	{
		MessageBox::Show("Se nesecitan todos los valores", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	

}
private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	frmListaSalaLectura^ lista = gcnew frmListaSalaLectura;
	lista->Show();
	ifstream SalaLecturaEntrada("Salas de lectura.dat", ios::binary | ios::app | ios::in);
	if (!SalaLecturaEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
	SalaLectura leerSala;
	SalaLecturaEntrada.read(reinterpret_cast<char*>(&leerSala), sizeof(SalaLectura));
	while (!SalaLecturaEntrada.eof())
	{
		System::String^ encargado = marshal_as<System::String^>(leerSala.obtenerEncargado());
		System::String^ disponibilidad = marshal_as<System::String^>(leerSala.obtenerDisponibilidad());
		std::string id = to_string(leerSala.obtenerID());
		std::string cap = to_string(leerSala.obtenerCapacidad());
		System::String^ ID = marshal_as<System::String^>(id);
		System::String^ capacidad = marshal_as<System::String^>(cap);
		lista->dgvListaSalaL->Rows->Add(ID, encargado, capacidad, disponibilidad);
		SalaLecturaEntrada.read(reinterpret_cast<char*>(&leerSala), sizeof(SalaLectura));
	}
}
private: System::Void cboEncargadoSalaL_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
