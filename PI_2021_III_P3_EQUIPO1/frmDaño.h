#pragma once
#include "frmListaDaños.h"
//#include "frmPrestamo.h"
#include "Daño.h"
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
	/// Resumen de frmDaño
	/// </summary>
	public ref class frmDaño : public System::Windows::Forms::Form
	{
	public:
		frmDaño(void)
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
		~frmDaño()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblDañoID;
	private: System::Windows::Forms::Label^ lblTitulo;
	


	private: System::Windows::Forms::Label^ lblTipoDaño;
	private: System::Windows::Forms::Label^ lblCostoDaño;



	private: System::Windows::Forms::TextBox^ txtCostoDaño;











	private: System::Windows::Forms::ComboBox^ cboTipoDaño;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDaño::typeid));
			this->lblDañoID = (gcnew System::Windows::Forms::Label());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblTipoDaño = (gcnew System::Windows::Forms::Label());
			this->lblCostoDaño = (gcnew System::Windows::Forms::Label());
			this->txtCostoDaño = (gcnew System::Windows::Forms::TextBox());
			this->cboTipoDaño = (gcnew System::Windows::Forms::ComboBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// lblDañoID
			// 
			this->lblDañoID->AutoSize = true;
			this->lblDañoID->Location = System::Drawing::Point(221, 132);
			this->lblDañoID->Name = L"lblDañoID";
			this->lblDañoID->Size = System::Drawing::Size(38, 13);
			this->lblDañoID->TabIndex = 0;
			this->lblDañoID->Text = L"No ID:";
			this->lblDañoID->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// lblTitulo
			// 
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(128, 43);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(270, 44);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Penalizaciones por Daño ";
			this->lblTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTipoDaño
			// 
			this->lblTipoDaño->AutoSize = true;
			this->lblTipoDaño->Location = System::Drawing::Point(186, 181);
			this->lblTipoDaño->Name = L"lblTipoDaño";
			this->lblTipoDaño->Size = System::Drawing::Size(73, 13);
			this->lblTipoDaño->TabIndex = 3;
			this->lblTipoDaño->Text = L"Tipo de daño:";
			// 
			// lblCostoDaño
			// 
			this->lblCostoDaño->AutoSize = true;
			this->lblCostoDaño->Location = System::Drawing::Point(177, 226);
			this->lblCostoDaño->Name = L"lblCostoDaño";
			this->lblCostoDaño->Size = System::Drawing::Size(82, 13);
			this->lblCostoDaño->TabIndex = 4;
			this->lblCostoDaño->Text = L"Costo por daño:";
			// 
			// txtCostoDaño
			// 
			this->txtCostoDaño->Location = System::Drawing::Point(277, 223);
			this->txtCostoDaño->Name = L"txtCostoDaño";
			this->txtCostoDaño->Size = System::Drawing::Size(121, 20);
			this->txtCostoDaño->TabIndex = 8;
			// 
			// cboTipoDaño
			// 
			this->cboTipoDaño->FormattingEnabled = true;
			this->cboTipoDaño->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Paginas rayadas", L"Deterioro de la estructura",
					L"Extravio", L"Otro"
			});
			this->cboTipoDaño->Location = System::Drawing::Point(277, 178);
			this->cboTipoDaño->Name = L"cboTipoDaño";
			this->cboTipoDaño->Size = System::Drawing::Size(121, 21);
			this->cboTipoDaño->TabIndex = 16;
			this->cboTipoDaño->SelectedIndexChanged += gcnew System::EventHandler(this, &frmDaño::cboTipoDaño_SelectedIndexChanged);
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregar.Image")));
			this->btnAgregar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAgregar->Location = System::Drawing::Point(132, 308);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(100, 38);
			this->btnAgregar->TabIndex = 17;
			this->btnAgregar->Text = L"Agregar  ";
			this->btnAgregar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAgregar->UseVisualStyleBackColor = false;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &frmDaño::btnAgregar_Click);
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnMostrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrar.Image")));
			this->btnMostrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrar->Location = System::Drawing::Point(277, 308);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(100, 38);
			this->btnMostrar->TabIndex = 18;
			this->btnMostrar->Text = L"Mostrar  ";
			this->btnMostrar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmDaño::btnMostrar_Click);
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(277, 129);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(121, 20);
			this->txtID->TabIndex = 19;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(106, 125);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 30);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(106, 219);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 30);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(106, 174);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 30);
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			// 
			// frmDaño
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(515, 417);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->cboTipoDaño);
			this->Controls->Add(this->txtCostoDaño);
			this->Controls->Add(this->lblCostoDaño);
			this->Controls->Add(this->lblTipoDaño);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->lblDañoID);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmDaño";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Daño";
			this->Load += gcnew System::EventHandler(this, &frmDaño::frmDaño_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			frmListaDaños^ listaDaños = gcnew frmListaDaños;
			listaDaños->Show();
			ifstream archivoDañosEntrada("Daños.dat", ios::binary | ios::app | ios::in);
			if (!archivoDañosEntrada)
			{
				this->Close();
				throw gcnew Exception("No se pudo abrir el archivo.");
			}
			Daño leerDaño;
			archivoDañosEntrada.read(reinterpret_cast<char*>(&leerDaño),
				sizeof(Daño));
			while (!archivoDañosEntrada.eof())
			{
				std::string id = to_string(leerDaño.obtenerDañoID());
				System::String^ tipoD = marshal_as<System::String^>(leerDaño.obtenerTipoDaño());
				std::string costo = to_string(leerDaño.obtenerCostoDaño());
				System::String^ ID = marshal_as<System::String^>(id);
				System::String^ Costo = marshal_as<System::String^>(costo);
				listaDaños->dgvDaños->Rows->Add(ID, tipoD, Costo);
				archivoDañosEntrada.read(reinterpret_cast<char*>(&leerDaño),
					sizeof(Daño));
			}
		}
		catch (Exception^ excep)
		{
			MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
private: System::Void frmDaño_Load(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream archivoDaños("Daños.dat", ios::binary | ios::app | ios::out);
		if (!archivoDaños)
		{
			this->Close();
			throw gcnew Exception("No se pudo crear el archivo.");
		}
		txtID->Text = "";
		cboTipoDaño->Text = "";
		txtCostoDaño->Text = "";
	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error); 
	}
	
}
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream archivoDañoSalida("Daños.dat", ios::binary | ios::app | ios::out);
		if (!archivoDañoSalida)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo.");
		}
		ifstream archivoDañosEntrada("Daños.dat", ios::binary | ios::app | ios::in);
		if (!archivoDañosEntrada)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo");
		}
		if (txtID->Text == "")
		{
			throw gcnew Exception("Ingrese el ID.");
		}
		int IDdaño = Convert::ToInt32(txtID->Text);

		Daño leerDaño;
		archivoDañosEntrada.read(reinterpret_cast<char*>(&leerDaño),
			sizeof(Daño));
		while (!archivoDañosEntrada.eof())
		{
			int id = leerDaño.obtenerDañoID();
			if (IDdaño != id)
			{
				archivoDañosEntrada.read(reinterpret_cast<char*>(&leerDaño),
					sizeof(Daño));
			}
			else
			{
				throw gcnew Exception("El ID ya esta en uso.");
			}
		}

		if (IDdaño <= 0)
		{
			throw gcnew Exception("El ID tiene que ser mayor que 0.");
		}
		if (IDdaño > 100)
		{
			throw gcnew Exception("El ID es demasiado grande");
		}
		else if (cboTipoDaño->SelectedItem == nullptr)
		{
			throw gcnew Exception("Ingrese el tipo de daño.");
		}
		else if (txtCostoDaño->Text == "")
		{
			throw gcnew Exception("No debe borrar el costo de daño.");
		}

		System::String^ TIPO = cboTipoDaño->SelectedItem->ToString();
		double costo = Convert::ToDouble(txtCostoDaño->Text);
		std::string tipo = marshal_as<std::string>(TIPO);

		Daño daño(IDdaño, tipo, costo);
		archivoDañoSalida.write(reinterpret_cast<char*>(&daño), sizeof(Daño));
		archivoDañoSalida.close();

		txtID->Text = "";
		cboTipoDaño->Text = "";
		txtCostoDaño->Text = "";
	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void cboTipoDaño_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Daño daño;
	System::String^ tipo = cboTipoDaño->SelectedItem->ToString();
	std::string Tipo = marshal_as<std::string>(tipo);
	daño.establecerTipoDaño(Tipo);

	txtCostoDaño->Text = String::Format("{0:F}", daño.calcularDaño()); 
	txtCostoDaño->Enabled = false;
}
};
}
