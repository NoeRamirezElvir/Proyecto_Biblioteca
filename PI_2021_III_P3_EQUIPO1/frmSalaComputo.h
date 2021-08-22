#pragma once
#include "frmVisitasSalaComputo.h"
#include "Empleado.h"
#include "SalaComputo.h"
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
	/// Resumen de frmSalaComputo
	/// </summary>
	public ref class frmSalaComputo : public System::Windows::Forms::Form
	{
	public:
		frmSalaComputo(void)
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
		~frmSalaComputo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblId;
	protected:
	private: System::Windows::Forms::Label^ lblCapacidad;
	private: System::Windows::Forms::Label^ lblEmpleado;
	private: System::Windows::Forms::Label^ lblDispo;

	private: System::Windows::Forms::Label^ lblHorario;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtCapacidad;
	private: System::Windows::Forms::TextBox^ txtHorario;
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Button^ btnMostrar;















	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::ComboBox^ cboDisponibilidad;
	private: System::Windows::Forms::ComboBox^ cboEncargado;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSalaComputo::typeid));
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->lblCapacidad = (gcnew System::Windows::Forms::Label());
			this->lblEmpleado = (gcnew System::Windows::Forms::Label());
			this->lblDispo = (gcnew System::Windows::Forms::Label());
			this->lblHorario = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtCapacidad = (gcnew System::Windows::Forms::TextBox());
			this->txtHorario = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->cboDisponibilidad = (gcnew System::Windows::Forms::ComboBox());
			this->cboEncargado = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblId->Location = System::Drawing::Point(89, 74);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(103, 15);
			this->lblId->TabIndex = 0;
			this->lblId->Text = L"ID Laboratorio:";
			// 
			// lblCapacidad
			// 
			this->lblCapacidad->AutoSize = true;
			this->lblCapacidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCapacidad->Location = System::Drawing::Point(114, 172);
			this->lblCapacidad->Name = L"lblCapacidad";
			this->lblCapacidad->Size = System::Drawing::Size(79, 15);
			this->lblCapacidad->TabIndex = 1;
			this->lblCapacidad->Text = L"Capacidad:";
			// 
			// lblEmpleado
			// 
			this->lblEmpleado->AutoSize = true;
			this->lblEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmpleado->Location = System::Drawing::Point(112, 198);
			this->lblEmpleado->Name = L"lblEmpleado";
			this->lblEmpleado->Size = System::Drawing::Size(80, 15);
			this->lblEmpleado->TabIndex = 2;
			this->lblEmpleado->Text = L"Encargado:";
			// 
			// lblDispo
			// 
			this->lblDispo->AutoSize = true;
			this->lblDispo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDispo->Location = System::Drawing::Point(89, 137);
			this->lblDispo->Name = L"lblDispo";
			this->lblDispo->Size = System::Drawing::Size(104, 15);
			this->lblDispo->TabIndex = 3;
			this->lblDispo->Text = L"Disponibilidad:";
			// 
			// lblHorario
			// 
			this->lblHorario->AutoSize = true;
			this->lblHorario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHorario->Location = System::Drawing::Point(130, 111);
			this->lblHorario->Name = L"lblHorario";
			this->lblHorario->Size = System::Drawing::Size(59, 15);
			this->lblHorario->TabIndex = 5;
			this->lblHorario->Text = L"Horario:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(355, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(261, 210);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// txtCapacidad
			// 
			this->txtCapacidad->Location = System::Drawing::Point(195, 167);
			this->txtCapacidad->Name = L"txtCapacidad";
			this->txtCapacidad->Size = System::Drawing::Size(116, 20);
			this->txtCapacidad->TabIndex = 10;
			// 
			// txtHorario
			// 
			this->txtHorario->Location = System::Drawing::Point(196, 110);
			this->txtHorario->Name = L"txtHorario";
			this->txtHorario->Size = System::Drawing::Size(115, 20);
			this->txtHorario->TabIndex = 14;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar->Location = System::Drawing::Point(196, 299);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(117, 43);
			this->btnRegistrar->TabIndex = 17;
			this->btnRegistrar->Text = L"Registrar ";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &frmSalaComputo::btnRegistrar_Click);
			// 
			// btnMostrar
			// 
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Location = System::Drawing::Point(403, 299);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(103, 43);
			this->btnMostrar->TabIndex = 21;
			this->btnMostrar->Text = L"Mostar Laboratorios";
			this->btnMostrar->UseVisualStyleBackColor = true;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmSalaComputo::btnMostrar_Click);
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(198, 75);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(113, 20);
			this->txtId->TabIndex = 13;
			// 
			// cboDisponibilidad
			// 
			this->cboDisponibilidad->FormattingEnabled = true;
			this->cboDisponibilidad->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Disponible", L"Ocupada" });
			this->cboDisponibilidad->Location = System::Drawing::Point(196, 137);
			this->cboDisponibilidad->Name = L"cboDisponibilidad";
			this->cboDisponibilidad->Size = System::Drawing::Size(115, 21);
			this->cboDisponibilidad->TabIndex = 22;
			// 
			// cboEncargado
			// 
			this->cboEncargado->FormattingEnabled = true;
			this->cboEncargado->Location = System::Drawing::Point(195, 198);
			this->cboEncargado->Name = L"cboEncargado";
			this->cboEncargado->Size = System::Drawing::Size(116, 21);
			this->cboEncargado->TabIndex = 22;
			// 
			// frmSalaComputo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGreen;
			this->ClientSize = System::Drawing::Size(665, 412);
			this->Controls->Add(this->cboEncargado);
			this->Controls->Add(this->cboDisponibilidad);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->txtHorario);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->txtCapacidad);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblHorario);
			this->Controls->Add(this->lblDispo);
			this->Controls->Add(this->lblEmpleado);
			this->Controls->Add(this->lblCapacidad);
			this->Controls->Add(this->lblId);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmSalaComputo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sala Computo";
			this->Load += gcnew System::EventHandler(this, &frmSalaComputo::frmSalaComputo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	frmVisitasSalaComputo^ formulario = gcnew frmVisitasSalaComputo;
	formulario->Show();

	ifstream SalaComputoEntrada("SalasComputo.dat", ios::binary | ios::app | ios::in);
	if (!SalaComputoEntrada)
	{
		MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->Close();
	}
	SalaComputo leerSala;
	SalaComputoEntrada.read(reinterpret_cast<char*>(&leerSala), sizeof(SalaComputo));
	while (!SalaComputoEntrada.eof())
	{
		System::String^ encargado = marshal_as<System::String^>(leerSala.obtenerEncargado());
		System::String^ disponibilidad = marshal_as<System::String^>(leerSala.obtenerDisponibilidad());
		System::String^ horar_ = marshal_as<System::String^>(leerSala.obtenerHorario());

		std::string id = to_string(leerSala.obtenerId());
		std::string cap = to_string(leerSala.obtenerCapacidad());

		System::String^ ID = marshal_as<System::String^>(id);
		System::String^ capacidad = marshal_as<System::String^>(cap);

		formulario->dgvSalaComputo->Rows->Add(ID,horar_, disponibilidad, capacidad, encargado);
		SalaComputoEntrada.read(reinterpret_cast<char*>(&leerSala), sizeof(SalaComputo));
	}
}

private: System::Void frmSalaComputo_Load(System::Object^ sender, System::EventArgs^ e) {
	ofstream archivoSalaComputo("SalasComputo.dat", ios::binary | ios::app | ios::out);
	if (!archivoSalaComputo)
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
		cboEncargado->Items->Add(nombreEmpleado);
		empleado.read(reinterpret_cast<char*>(&empleadoNom), sizeof(Empleado));
	}
}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream SalaComputoSalida("SalasComputo.dat", ios::binary | ios::app | ios::out);
		if (!SalaComputoSalida)
		{
			MessageBox::Show("No se pudo abrir el archivo", "Error en el sistema", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
		}
		ifstream SalaComputoEntrada("SalasComputo.dat", ios::binary | ios::app | ios::in);
		if (!SalaComputoEntrada)
		{
			throw gcnew Exception("No se pudo abrir el archivo.");
		}
		if (txtId->Text == "")
		{
			throw gcnew Exception("Ingrese el ID.");
		}
		int ID = Convert::ToInt32(txtId->Text);

		SalaComputo leerSucursal;
		SalaComputoEntrada.read(reinterpret_cast<char*>(&leerSucursal), sizeof(SalaComputo));
		
		while (!SalaComputoEntrada.eof())
		{
			int id = leerSucursal.obtenerId();
			if (ID != id)
			{
				SalaComputoEntrada.read(reinterpret_cast<char*>(&leerSucursal), sizeof(SalaComputo));
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
		//horario
		System::String^ horario = txtHorario->Text;
		if (horario == "")
		{
			throw gcnew Exception("Ingrese horario. Ejem: 18:00-21:00");
		}
		else if (horario->Length < 9)
		{
			throw gcnew Exception("Horario ingresado muy corto");
		}
		//disponibilidad
		if (cboDisponibilidad->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione disponibilidad");
		}
		System::String^ disp = cboDisponibilidad->SelectedItem->ToString();
		//capacidad
		int capacidad = Convert::ToInt16(txtCapacidad->Text);
		if (txtCapacidad->Text == "")
		{
			throw gcnew Exception("Ingrese Capacidad");
		}
		if (capacidad < 10)
		{
			throw gcnew Exception("Capacidad muy baja");
		}
		//encargado
		if (cboEncargado->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione Encargado");
		}
		System::String^ enca = cboEncargado->SelectedItem->ToString();


		std::string encargado = marshal_as<std::string>(enca);
		std::string disponibilidad = marshal_as<std::string>(disp);
		std::string hora_ = marshal_as<std::string>(horario);

		SalaComputo sala(ID, hora_, disponibilidad, capacidad, encargado);

		SalaComputoSalida.write(reinterpret_cast<const char*>(&sala), sizeof(SalaComputo));
		SalaComputoSalida.close();
		txtId->Text = "";
		txtHorario->Text = "";
		cboDisponibilidad->Text = "";
		txtCapacidad->Text = "";
		cboEncargado->Text = "";
	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
