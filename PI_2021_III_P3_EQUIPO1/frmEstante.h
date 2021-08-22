#pragma once
#include "frmLibrosEstante.h"
#include "Estante.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <msclr/marshal_cppstd.h>
namespace PI2021IIIP3EQUIPO1 {
	using namespace msclr::interop; /// nuevos using namespace
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmEstante
	/// </summary>
	public ref class frmEstante : public System::Windows::Forms::Form
	{
	public:
		frmEstante(void)
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
		~frmEstante()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNumeroEstante;
	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::Label^ lblLetraInicial;
	private: System::Windows::Forms::Label^ lblLetraFinal;
	private: System::Windows::Forms::TextBox^ txtLi;
	private: System::Windows::Forms::TextBox^ txtLf;


	private: System::Windows::Forms::Button^ btnregistrar;

	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNiveles;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmEstante::typeid));
			this->lblNumeroEstante = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->lblLetraInicial = (gcnew System::Windows::Forms::Label());
			this->lblLetraFinal = (gcnew System::Windows::Forms::Label());
			this->txtLi = (gcnew System::Windows::Forms::TextBox());
			this->txtLf = (gcnew System::Windows::Forms::TextBox());
			this->btnregistrar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNiveles = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblNumeroEstante
			// 
			this->lblNumeroEstante->AutoSize = true;
			this->lblNumeroEstante->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumeroEstante->Location = System::Drawing::Point(128, 92);
			this->lblNumeroEstante->Name = L"lblNumeroEstante";
			this->lblNumeroEstante->Size = System::Drawing::Size(134, 15);
			this->lblNumeroEstante->TabIndex = 0;
			this->lblNumeroEstante->Text = L"Numero de Estante:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(268, 91);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(125, 20);
			this->txtId->TabIndex = 1;
			// 
			// lblLetraInicial
			// 
			this->lblLetraInicial->AutoSize = true;
			this->lblLetraInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLetraInicial->Location = System::Drawing::Point(175, 117);
			this->lblLetraInicial->Name = L"lblLetraInicial";
			this->lblLetraInicial->Size = System::Drawing::Size(87, 15);
			this->lblLetraInicial->TabIndex = 2;
			this->lblLetraInicial->Text = L"Letra Inicial:";
			// 
			// lblLetraFinal
			// 
			this->lblLetraFinal->AutoSize = true;
			this->lblLetraFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLetraFinal->Location = System::Drawing::Point(182, 146);
			this->lblLetraFinal->Name = L"lblLetraFinal";
			this->lblLetraFinal->Size = System::Drawing::Size(80, 15);
			this->lblLetraFinal->TabIndex = 3;
			this->lblLetraFinal->Text = L"Letra Final:";
			// 
			// txtLi
			// 
			this->txtLi->Location = System::Drawing::Point(268, 117);
			this->txtLi->Name = L"txtLi";
			this->txtLi->Size = System::Drawing::Size(125, 20);
			this->txtLi->TabIndex = 4;
			// 
			// txtLf
			// 
			this->txtLf->Location = System::Drawing::Point(268, 145);
			this->txtLf->Name = L"txtLf";
			this->txtLf->Size = System::Drawing::Size(125, 20);
			this->txtLf->TabIndex = 5;
			// 
			// btnregistrar
			// 
			this->btnregistrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnregistrar->Location = System::Drawing::Point(178, 254);
			this->btnregistrar->Name = L"btnregistrar";
			this->btnregistrar->Size = System::Drawing::Size(107, 52);
			this->btnregistrar->TabIndex = 6;
			this->btnregistrar->Text = L"Registrar";
			this->btnregistrar->UseVisualStyleBackColor = true;
			this->btnregistrar->Click += gcnew System::EventHandler(this, &frmEstante::btnregistrar_Click);
			// 
			// btnMostrar
			// 
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Location = System::Drawing::Point(330, 254);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(111, 52);
			this->btnMostrar->TabIndex = 8;
			this->btnMostrar->Text = L"Mostrar Estantes";
			this->btnMostrar->UseVisualStyleBackColor = true;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmEstante::btnMostrar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(464, 69);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(114, 108);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(204, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Niveles:";
			// 
			// txtNiveles
			// 
			this->txtNiveles->Location = System::Drawing::Point(268, 171);
			this->txtNiveles->Name = L"txtNiveles";
			this->txtNiveles->Size = System::Drawing::Size(125, 20);
			this->txtNiveles->TabIndex = 5;
			// 
			// frmEstante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(608, 375);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnregistrar);
			this->Controls->Add(this->txtNiveles);
			this->Controls->Add(this->txtLf);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtLi);
			this->Controls->Add(this->lblLetraFinal);
			this->Controls->Add(this->lblLetraInicial);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblNumeroEstante);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmEstante";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Estante";
			this->Load += gcnew System::EventHandler(this, &frmEstante::frmEstante_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	frmLibrosEstante^ formulario = gcnew frmLibrosEstante;
	formulario->Show();

	ifstream archivoEstanteEntrada;

	archivoEstanteEntrada.open("Estantes.dat", ios::binary | ios::app | ios::in);
	if (!archivoEstanteEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
	Estante leerEstante;

	archivoEstanteEntrada.read(reinterpret_cast<char*>(&leerEstante), sizeof(Estante));
	while (!archivoEstanteEntrada.eof())
	{
		std::string id = to_string(leerEstante.obtenerIDEstante());
		System::String^ ID1 = marshal_as<System::String^>(id);

		System::String^ lI1 = marshal_as<System::String^>(leerEstante.obtenerLetraI());
		System::String^ lF1 = marshal_as<System::String^>(leerEstante.obtenerLetraF());
		System::String^ lN1 = marshal_as<System::String^>(leerEstante.obtenerNiveles());

		formulario->dgvListaEstantes->Rows->Add(ID1, lI1, lF1,lN1);
		archivoEstanteEntrada.read(reinterpret_cast<char*>(&leerEstante), sizeof(Estante));
	}

}
private: System::Void frmEstante_Load(System::Object^ sender, System::EventArgs^ e) {
	ofstream archivoEstante("Estantes.dat", ios::binary | ios::app | ios::out);

	if (!archivoEstante)
	{
		MessageBox::Show("No se pudo crear el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
	txtId->Text = "";
	txtLi->Text = "";
	txtLf->Text = "";
	txtNiveles->Text = "";


}
	private: System::Void btnregistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			ofstream archivoEstanteSalida("Estantes.dat", ios::binary | ios::app | ios::out);
			if (!archivoEstanteSalida)
			{
				MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->Close();
			}
			//variables String del sistema
			System::String^ LetraI = txtLi->Text;
			System::String^ LetraF = txtLf->Text;
			System::String^ Niveles = txtNiveles->Text;
			int ID = Convert::ToInt32(txtId->Text);

			//convertir los string
			std::string LetraIe = marshal_as<std::string>(LetraI);
			std::string LetraFe = marshal_as<std::string>(LetraF);
			std::string NivelesE = marshal_as<std::string>(Niveles);
			Estante estante(ID, LetraIe, LetraFe, NivelesE);

			ifstream archivoEstanteEntrada("Estantes.dat", ios::binary | ios::app | ios::in);
			if (!archivoEstanteEntrada)
			{
				throw gcnew Exception("No se pudo abrir el archivo.");
			}
			if (txtId->Text == "")
			{
				throw gcnew Exception("Ingrese el ID.");
			}
			Estante leerEstante;
			archivoEstanteEntrada.read(reinterpret_cast<char*>(&leerEstante), sizeof(Estante));
			while (!archivoEstanteEntrada.eof())
			{
				int id = leerEstante.obtenerIDEstante();
				if (ID != id)
				{
					archivoEstanteEntrada.read(reinterpret_cast<char*>(&leerEstante), sizeof(Estante));
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

			if (LetraI == "")
			{
				throw gcnew Exception("Ingrese Letra inicial");
			}
			else if (LetraI->Length > 1)
			{
				throw gcnew Exception("Ingrese solo una letra inicial");
			}
			if (LetraF == "")
			{
				throw gcnew Exception("Ingrese letra final");
			}
			else if (LetraF->Length > 1)
			{
				throw gcnew Exception("Ingrese solo una letra final");
			}
			if (Niveles == "")
			{
				throw gcnew Exception("Ingrese nivel");
			}
			else if (Niveles->Length > 2)
			{
				throw gcnew Exception("Niveles disponibles del 1 al 10");
			}
			archivoEstanteSalida.write(reinterpret_cast<const char*>(&estante), sizeof(Estante));
			archivoEstanteSalida.close();

			txtId->Text = "";
			txtLi->Text = "";
			txtLf->Text = "";
			txtNiveles->Text = "";
		}
		catch (Exception^ excep)
		{
			MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
