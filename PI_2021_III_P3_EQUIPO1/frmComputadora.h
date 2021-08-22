#pragma once
#include "Computadora.h"
#include "frmRegistroComputadoras.h"
#include <fstream>
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
	/// Resumen de frmComputadora
	/// </summary>
	public ref class frmComputadora : public System::Windows::Forms::Form
	{
	public:
		frmComputadora(void)
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
		~frmComputadora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblIdComputadora;
	private: System::Windows::Forms::Label^ lblMarca;
	private: System::Windows::Forms::Label^ lblModelo;
	private: System::Windows::Forms::Label^ lblHdd;
	private: System::Windows::Forms::Label^ lblRam;
	private: System::Windows::Forms::Label^ lblTipo;
	private: System::Windows::Forms::Label^ lblOs;
	private: System::Windows::Forms::Label^ lblObservacion;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtMarca;
	private: System::Windows::Forms::TextBox^ txtModelo;
	private: System::Windows::Forms::TextBox^ txtHdd;
	private: System::Windows::Forms::TextBox^ txtRam;
	private: System::Windows::Forms::TextBox^ txtObservacion;






	private: System::Windows::Forms::ComboBox^ cboTipo;
	private: System::Windows::Forms::ComboBox^ cboOs;


	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnMostar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmComputadora::typeid));
			this->lblIdComputadora = (gcnew System::Windows::Forms::Label());
			this->lblMarca = (gcnew System::Windows::Forms::Label());
			this->lblModelo = (gcnew System::Windows::Forms::Label());
			this->lblHdd = (gcnew System::Windows::Forms::Label());
			this->lblRam = (gcnew System::Windows::Forms::Label());
			this->lblTipo = (gcnew System::Windows::Forms::Label());
			this->lblOs = (gcnew System::Windows::Forms::Label());
			this->lblObservacion = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtMarca = (gcnew System::Windows::Forms::TextBox());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->txtHdd = (gcnew System::Windows::Forms::TextBox());
			this->txtRam = (gcnew System::Windows::Forms::TextBox());
			this->txtObservacion = (gcnew System::Windows::Forms::TextBox());
			this->cboTipo = (gcnew System::Windows::Forms::ComboBox());
			this->cboOs = (gcnew System::Windows::Forms::ComboBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnMostar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblIdComputadora
			// 
			this->lblIdComputadora->AutoSize = true;
			this->lblIdComputadora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIdComputadora->Location = System::Drawing::Point(93, 40);
			this->lblIdComputadora->Name = L"lblIdComputadora";
			this->lblIdComputadora->Size = System::Drawing::Size(115, 15);
			this->lblIdComputadora->TabIndex = 0;
			this->lblIdComputadora->Text = L"ID Computadora:";
			// 
			// lblMarca
			// 
			this->lblMarca->AutoSize = true;
			this->lblMarca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMarca->Location = System::Drawing::Point(152, 69);
			this->lblMarca->Name = L"lblMarca";
			this->lblMarca->Size = System::Drawing::Size(51, 15);
			this->lblMarca->TabIndex = 1;
			this->lblMarca->Text = L"Marca:";
			// 
			// lblModelo
			// 
			this->lblModelo->AutoSize = true;
			this->lblModelo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblModelo->Location = System::Drawing::Point(149, 99);
			this->lblModelo->Name = L"lblModelo";
			this->lblModelo->Size = System::Drawing::Size(59, 15);
			this->lblModelo->TabIndex = 2;
			this->lblModelo->Text = L"Modelo:";
			// 
			// lblHdd
			// 
			this->lblHdd->AutoSize = true;
			this->lblHdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHdd->Location = System::Drawing::Point(167, 130);
			this->lblHdd->Name = L"lblHdd";
			this->lblHdd->Size = System::Drawing::Size(41, 15);
			this->lblHdd->TabIndex = 3;
			this->lblHdd->Text = L"HDD:";
			// 
			// lblRam
			// 
			this->lblRam->AutoSize = true;
			this->lblRam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRam->Location = System::Drawing::Point(167, 160);
			this->lblRam->Name = L"lblRam";
			this->lblRam->Size = System::Drawing::Size(41, 15);
			this->lblRam->TabIndex = 4;
			this->lblRam->Text = L"Ram:";
			// 
			// lblTipo
			// 
			this->lblTipo->AutoSize = true;
			this->lblTipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTipo->Location = System::Drawing::Point(169, 191);
			this->lblTipo->Name = L"lblTipo";
			this->lblTipo->Size = System::Drawing::Size(39, 15);
			this->lblTipo->TabIndex = 5;
			this->lblTipo->Text = L"Tipo:";
			// 
			// lblOs
			// 
			this->lblOs->AutoSize = true;
			this->lblOs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOs->Location = System::Drawing::Point(80, 222);
			this->lblOs->Name = L"lblOs";
			this->lblOs->Size = System::Drawing::Size(128, 15);
			this->lblOs->TabIndex = 6;
			this->lblOs->Text = L"Sistema Operativo:";
			// 
			// lblObservacion
			// 
			this->lblObservacion->AutoSize = true;
			this->lblObservacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblObservacion->Location = System::Drawing::Point(118, 254);
			this->lblObservacion->Name = L"lblObservacion";
			this->lblObservacion->Size = System::Drawing::Size(90, 15);
			this->lblObservacion->TabIndex = 7;
			this->lblObservacion->Text = L"Observacion:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(214, 39);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(124, 20);
			this->txtId->TabIndex = 8;
			// 
			// txtMarca
			// 
			this->txtMarca->Location = System::Drawing::Point(214, 68);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->Size = System::Drawing::Size(124, 20);
			this->txtMarca->TabIndex = 9;
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(214, 98);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(124, 20);
			this->txtModelo->TabIndex = 10;
			// 
			// txtHdd
			// 
			this->txtHdd->Location = System::Drawing::Point(214, 129);
			this->txtHdd->Name = L"txtHdd";
			this->txtHdd->Size = System::Drawing::Size(124, 20);
			this->txtHdd->TabIndex = 11;
			// 
			// txtRam
			// 
			this->txtRam->Location = System::Drawing::Point(214, 159);
			this->txtRam->Name = L"txtRam";
			this->txtRam->Size = System::Drawing::Size(124, 20);
			this->txtRam->TabIndex = 12;
			// 
			// txtObservacion
			// 
			this->txtObservacion->Location = System::Drawing::Point(214, 249);
			this->txtObservacion->Name = L"txtObservacion";
			this->txtObservacion->Size = System::Drawing::Size(124, 20);
			this->txtObservacion->TabIndex = 13;
			// 
			// cboTipo
			// 
			this->cboTipo->FormattingEnabled = true;
			this->cboTipo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Desktop", L"Laptop" });
			this->cboTipo->Location = System::Drawing::Point(214, 185);
			this->cboTipo->Name = L"cboTipo";
			this->cboTipo->Size = System::Drawing::Size(124, 21);
			this->cboTipo->TabIndex = 14;
			// 
			// cboOs
			// 
			this->cboOs->FormattingEnabled = true;
			this->cboOs->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Windows 7", L"Windows 8", L"Windows 8.1", L"Windows 10",
					L"Windows 11"
			});
			this->cboOs->Location = System::Drawing::Point(214, 222);
			this->cboOs->Name = L"cboOs";
			this->cboOs->Size = System::Drawing::Size(124, 21);
			this->cboOs->TabIndex = 15;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Location = System::Drawing::Point(214, 293);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(98, 42);
			this->btnAgregar->TabIndex = 16;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &frmComputadora::btnAgregar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(425, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 131);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// btnMostar
			// 
			this->btnMostar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostar->Location = System::Drawing::Point(375, 293);
			this->btnMostar->Name = L"btnMostar";
			this->btnMostar->Size = System::Drawing::Size(109, 42);
			this->btnMostar->TabIndex = 18;
			this->btnMostar->Text = L"Mostrar Computadoras";
			this->btnMostar->UseVisualStyleBackColor = true;
			this->btnMostar->Click += gcnew System::EventHandler(this, &frmComputadora::btnMostar_Click);
			// 
			// frmComputadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(623, 380);
			this->Controls->Add(this->btnMostar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->cboOs);
			this->Controls->Add(this->cboTipo);
			this->Controls->Add(this->txtObservacion);
			this->Controls->Add(this->txtRam);
			this->Controls->Add(this->txtHdd);
			this->Controls->Add(this->txtModelo);
			this->Controls->Add(this->txtMarca);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblObservacion);
			this->Controls->Add(this->lblOs);
			this->Controls->Add(this->lblTipo);
			this->Controls->Add(this->lblRam);
			this->Controls->Add(this->lblHdd);
			this->Controls->Add(this->lblModelo);
			this->Controls->Add(this->lblMarca);
			this->Controls->Add(this->lblIdComputadora);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmComputadora";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Computadora";
			this->Load += gcnew System::EventHandler(this, &frmComputadora::frmComputadora_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void frmComputadora_Load(System::Object^ sender, System::EventArgs^ e) {
	ofstream archivoComputadora("Computadoras.dat", ios::binary | ios::app | ios::out);

	if (!archivoComputadora)
	{
		MessageBox::Show("No se pudo crear el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
	txtId->Text = "";
	txtMarca->Text = "";
	txtModelo->Text = "";
	txtHdd->Text = "";
	txtRam->Text = "";
	cboTipo->Text = "";
	cboOs->Text = "";
	txtObservacion->Text = "";
}
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream archivoComputadoraSalida("Computadoras.dat", ios::binary | ios::app | ios::out);
		if (!archivoComputadoraSalida)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		//variables String del sistema
		
		System::String^ marca = txtMarca->Text;
		System::String^ modelo = txtModelo->Text;
		System::String^ disco = txtHdd->Text;
		System::String^ ram = txtRam->Text;
		System::String^ observacion = txtObservacion->Text;
		int ID = Convert::ToInt32(txtId->Text);

		ifstream archivoComputadoraEntrada("Computadoras.dat", ios::binary | ios::app | ios::in);
		if (!archivoComputadoraEntrada)
		{
			throw gcnew Exception("No se pudo abrir el archivo.");
		}
		if (txtId->Text == "")
		{
			throw gcnew Exception("Ingrese el ID.");
		}

		Computadora leerSucursal;
		archivoComputadoraEntrada.read(reinterpret_cast<char*>(&leerSucursal), sizeof(Computadora));
		while (!archivoComputadoraEntrada.eof())
		{
			int id = leerSucursal.obtenerIDcomputadora();
			if (ID != id)
			{
				archivoComputadoraEntrada.read(reinterpret_cast<char*>(&leerSucursal), sizeof(Computadora));
			}
			else
			{
				throw gcnew Exception("El ID ya esta en uso.");
			}
		}
		if (txtId->Text == "")
		{
			throw gcnew Exception("Ingrese el ID.");
		}
		if (ID <= 0)
		{
			throw gcnew Exception("El ID tiene que ser positivo y mayor a 0.");
		}
		if (marca == "")
		{
			throw gcnew Exception("Ingrese Marca");
		}
		else if (marca->Length < 2)
		{
			throw gcnew Exception("Marca ingresada muy corta");
		}
		if (modelo == "")
		{
			throw gcnew Exception("Ingrese modelo");
		}
		else if (modelo->Length < 4)
		{
			throw gcnew Exception("Modelo ingresado muy corto");
		}
		if (disco == "")
		{
			throw gcnew Exception("ingrese capacidad del disco");
		}
		else if (disco->Length < 3)
		{
			throw gcnew Exception("valor disco muy corto");
		}
		if (ram == "")
		{
			throw gcnew Exception("Ingrese Tamaño memoria RAM");
		}
		else if (ram->Length < 3)
		{
			throw gcnew Exception("valor RAM muy corto");
		}
		if (cboTipo->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione Tipo");
		}
		System::String^ tipo = cboTipo->SelectedItem->ToString();
		if (cboOs->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione el Sistema Operativo");
		}
		System::String^ oS = cboOs->SelectedItem->ToString();
		if (observacion == "")
		{
			throw gcnew Exception("Ingrese Observacion");
		}
		else if (observacion->Length < 5)
		{
			throw gcnew Exception("Observacion demasiada corta");
		}

		//convertir los string
		std::string marcaC = marshal_as<std::string>(marca);
		std::string modeloC = marshal_as<std::string>(modelo);
		std::string discoC = marshal_as<std::string>(disco);
		std::string ramC = marshal_as<std::string>(ram);
		std::string tipoC = marshal_as<std::string>(tipo);
		std::string oSC = marshal_as<std::string>(oS);
		std::string obserC = marshal_as<std::string>(observacion);
		Computadora computadora(ID, marcaC, modeloC, discoC, ramC, tipoC, oSC, obserC);

		archivoComputadoraSalida.write(reinterpret_cast<const char*>(&computadora), sizeof(Computadora));
		archivoComputadoraSalida.close();

		txtId->Text = "";
		txtMarca->Text = "";
		txtModelo->Text = "";
		txtHdd->Text = "";
		txtRam->Text = "";
		cboTipo->Text = "";
		cboOs->Text = "";
		txtObservacion->Text = "";
	}
	catch (Exception^ except)
	{
		MessageBox::Show(except->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
private: System::Void btnMostar_Click(System::Object^ sender, System::EventArgs^ e) {

	frmRegistroComputadoras^ listaComputadora = gcnew frmRegistroComputadoras;
	listaComputadora->Show();

	ifstream archivoComputadoraEntrada;

	archivoComputadoraEntrada.open("Computadoras.dat", ios::binary | ios::app | ios::in);
	if (!archivoComputadoraEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
	Computadora leerComputadora;

	archivoComputadoraEntrada.read(reinterpret_cast<char*>(&leerComputadora), sizeof(Computadora));
	while (!archivoComputadoraEntrada.eof())
	{
		std::string id = to_string(leerComputadora.obtenerIDcomputadora());
		System::String^ ID1 = marshal_as<System::String^>(id);

		System::String^ marca1 = marshal_as<System::String^>(leerComputadora.obtenerMarca());
		System::String^ modelo1 = marshal_as<System::String^>(leerComputadora.obtenerModelo());
		System::String^ hdd1 = marshal_as<System::String^>(leerComputadora.obtenerHdd());
		System::String^ ram1 = marshal_as<System::String^>(leerComputadora.obtenerRam());
		System::String^ tipo1 = marshal_as<System::String^>(leerComputadora.obtenerTipo());
		System::String^ oS1 = marshal_as<System::String^>(leerComputadora.obtenerOS());
		System::String^ observacion1 = marshal_as<System::String^>(leerComputadora.obtenerObservacion());
		listaComputadora->dvgListaComputadoras->Rows->Add(ID1, marca1 , modelo1, hdd1, ram1, tipo1, oS1, observacion1);
		archivoComputadoraEntrada.read(reinterpret_cast<char*>(&leerComputadora), sizeof(Computadora));
	}
}
};
}
