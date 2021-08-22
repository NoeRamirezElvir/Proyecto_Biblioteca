#pragma once
#include "frmListaLibros.h"
#include "Libro.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <msclr/marshal_cppstd.h>

namespace PI2021IIIP3EQUIPO1 {
	using namespace msclr::interop; ////nuevos using namespace
	using namespace std;////
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLibro
	/// </summary>
	public ref class frmLibro : public System::Windows::Forms::Form
	{
	public:
		frmLibro(void)
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
		~frmLibro()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblIDlibro;
	private: System::Windows::Forms::Label^ lblNombreLibro;
	private: System::Windows::Forms::Label^ lblNombreAutorLibro;
	private: System::Windows::Forms::Label^ lblEditorialLibro;
	private: System::Windows::Forms::Label^ lblAñoEdicionLibro;
	private: System::Windows::Forms::Label^ lblCategoriaLibro;
	private: System::Windows::Forms::Label^ lblPrecioLibro;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtIDlibro;
	private: System::Windows::Forms::TextBox^ txtNombreLibro;
	private: System::Windows::Forms::TextBox^ txtNombreAutorLibro;
	private: System::Windows::Forms::TextBox^ txtEditorialLibro;
	private: System::Windows::Forms::TextBox^ txtCostoLibro;





	private: System::Windows::Forms::TextBox^ txtAñoEdicionLibro;
	private: System::Windows::Forms::ComboBox^ cboCategoriaLibro;


	private: System::Windows::Forms::Button^ btnRegistrarLibro;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnMostrarLibros;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtVolumen;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLibro::typeid));
			this->lblIDlibro = (gcnew System::Windows::Forms::Label());
			this->lblNombreLibro = (gcnew System::Windows::Forms::Label());
			this->lblNombreAutorLibro = (gcnew System::Windows::Forms::Label());
			this->lblEditorialLibro = (gcnew System::Windows::Forms::Label());
			this->lblAñoEdicionLibro = (gcnew System::Windows::Forms::Label());
			this->lblCategoriaLibro = (gcnew System::Windows::Forms::Label());
			this->lblPrecioLibro = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtIDlibro = (gcnew System::Windows::Forms::TextBox());
			this->txtNombreLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtNombreAutorLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtEditorialLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtCostoLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtAñoEdicionLibro = (gcnew System::Windows::Forms::TextBox());
			this->cboCategoriaLibro = (gcnew System::Windows::Forms::ComboBox());
			this->btnRegistrarLibro = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnMostrarLibros = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtVolumen = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblIDlibro
			// 
			this->lblIDlibro->AutoSize = true;
			this->lblIDlibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDlibro->Location = System::Drawing::Point(106, 162);
			this->lblIDlibro->Name = L"lblIDlibro";
			this->lblIDlibro->Size = System::Drawing::Size(82, 15);
			this->lblIDlibro->TabIndex = 1;
			this->lblIDlibro->Text = L"ID del libro:";
			// 
			// lblNombreLibro
			// 
			this->lblNombreLibro->AutoSize = true;
			this->lblNombreLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreLibro->Location = System::Drawing::Point(69, 225);
			this->lblNombreLibro->Name = L"lblNombreLibro";
			this->lblNombreLibro->Size = System::Drawing::Size(119, 15);
			this->lblNombreLibro->TabIndex = 2;
			this->lblNombreLibro->Text = L"Nombre del libro:";
			// 
			// lblNombreAutorLibro
			// 
			this->lblNombreAutorLibro->AutoSize = true;
			this->lblNombreAutorLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreAutorLibro->Location = System::Drawing::Point(65, 290);
			this->lblNombreAutorLibro->Name = L"lblNombreAutorLibro";
			this->lblNombreAutorLibro->Size = System::Drawing::Size(123, 15);
			this->lblNombreAutorLibro->TabIndex = 3;
			this->lblNombreAutorLibro->Text = L"Nombre del autor:";
			// 
			// lblEditorialLibro
			// 
			this->lblEditorialLibro->AutoSize = true;
			this->lblEditorialLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEditorialLibro->Location = System::Drawing::Point(123, 350);
			this->lblEditorialLibro->Name = L"lblEditorialLibro";
			this->lblEditorialLibro->Size = System::Drawing::Size(65, 15);
			this->lblEditorialLibro->TabIndex = 4;
			this->lblEditorialLibro->Text = L"Editorial:";
			// 
			// lblAñoEdicionLibro
			// 
			this->lblAñoEdicionLibro->AutoSize = true;
			this->lblAñoEdicionLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAñoEdicionLibro->Location = System::Drawing::Point(345, 163);
			this->lblAñoEdicionLibro->Name = L"lblAñoEdicionLibro";
			this->lblAñoEdicionLibro->Size = System::Drawing::Size(106, 15);
			this->lblAñoEdicionLibro->TabIndex = 5;
			this->lblAñoEdicionLibro->Text = L"Año de edicion:";
			// 
			// lblCategoriaLibro
			// 
			this->lblCategoriaLibro->AutoSize = true;
			this->lblCategoriaLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCategoriaLibro->Location = System::Drawing::Point(378, 225);
			this->lblCategoriaLibro->Name = L"lblCategoriaLibro";
			this->lblCategoriaLibro->Size = System::Drawing::Size(73, 15);
			this->lblCategoriaLibro->TabIndex = 6;
			this->lblCategoriaLibro->Text = L"Categoria:";
			// 
			// lblPrecioLibro
			// 
			this->lblPrecioLibro->AutoSize = true;
			this->lblPrecioLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrecioLibro->Location = System::Drawing::Point(84, 406);
			this->lblPrecioLibro->Name = L"lblPrecioLibro";
			this->lblPrecioLibro->Size = System::Drawing::Size(104, 15);
			this->lblPrecioLibro->TabIndex = 7;
			this->lblPrecioLibro->Text = L"Costo del libro:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(247, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(306, 36);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Registrar nuevo libro";
			// 
			// txtIDlibro
			// 
			this->txtIDlibro->Location = System::Drawing::Point(190, 162);
			this->txtIDlibro->Name = L"txtIDlibro";
			this->txtIDlibro->Size = System::Drawing::Size(121, 20);
			this->txtIDlibro->TabIndex = 9;
			// 
			// txtNombreLibro
			// 
			this->txtNombreLibro->Location = System::Drawing::Point(190, 225);
			this->txtNombreLibro->Name = L"txtNombreLibro";
			this->txtNombreLibro->Size = System::Drawing::Size(121, 20);
			this->txtNombreLibro->TabIndex = 10;
			// 
			// txtNombreAutorLibro
			// 
			this->txtNombreAutorLibro->Location = System::Drawing::Point(190, 290);
			this->txtNombreAutorLibro->Name = L"txtNombreAutorLibro";
			this->txtNombreAutorLibro->Size = System::Drawing::Size(121, 20);
			this->txtNombreAutorLibro->TabIndex = 11;
			// 
			// txtEditorialLibro
			// 
			this->txtEditorialLibro->Location = System::Drawing::Point(190, 350);
			this->txtEditorialLibro->Name = L"txtEditorialLibro";
			this->txtEditorialLibro->Size = System::Drawing::Size(121, 20);
			this->txtEditorialLibro->TabIndex = 12;
			// 
			// txtCostoLibro
			// 
			this->txtCostoLibro->Location = System::Drawing::Point(190, 406);
			this->txtCostoLibro->Name = L"txtCostoLibro";
			this->txtCostoLibro->Size = System::Drawing::Size(121, 20);
			this->txtCostoLibro->TabIndex = 13;
			// 
			// txtAñoEdicionLibro
			// 
			this->txtAñoEdicionLibro->Location = System::Drawing::Point(453, 162);
			this->txtAñoEdicionLibro->Name = L"txtAñoEdicionLibro";
			this->txtAñoEdicionLibro->Size = System::Drawing::Size(121, 20);
			this->txtAñoEdicionLibro->TabIndex = 14;
			// 
			// cboCategoriaLibro
			// 
			this->cboCategoriaLibro->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cboCategoriaLibro->FormattingEnabled = true;
			this->cboCategoriaLibro->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Autobiografia", L"Autoayuda", L"Ciencia",
					L"Ciencia ficcion", L"Comic", L"Deporte", L"Humor", L"Novela", L"Romance", L"Salud", L"Ciencias sociales", L"Suspenso", L"Terror"
			});
			this->cboCategoriaLibro->Location = System::Drawing::Point(453, 225);
			this->cboCategoriaLibro->Name = L"cboCategoriaLibro";
			this->cboCategoriaLibro->Size = System::Drawing::Size(121, 21);
			this->cboCategoriaLibro->TabIndex = 15;
			// 
			// btnRegistrarLibro
			// 
			this->btnRegistrarLibro->BackColor = System::Drawing::Color::MediumAquamarine;
			this->btnRegistrarLibro->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrarLibro->FlatAppearance->BorderSize = 2;
			this->btnRegistrarLibro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrarLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrarLibro->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegistrarLibro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrarLibro.Image")));
			this->btnRegistrarLibro->Location = System::Drawing::Point(441, 368);
			this->btnRegistrarLibro->Name = L"btnRegistrarLibro";
			this->btnRegistrarLibro->Size = System::Drawing::Size(112, 53);
			this->btnRegistrarLibro->TabIndex = 16;
			this->btnRegistrarLibro->Text = L"Registrar libro";
			this->btnRegistrarLibro->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrarLibro->UseVisualStyleBackColor = false;
			this->btnRegistrarLibro->Click += gcnew System::EventHandler(this, &frmLibro::btnRegistrarLibro_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(631, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 181);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// btnMostrarLibros
			// 
			this->btnMostrarLibros->BackColor = System::Drawing::Color::MediumAquamarine;
			this->btnMostrarLibros->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrarLibros->FlatAppearance->BorderSize = 2;
			this->btnMostrarLibros->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrarLibros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarLibros->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrarLibros.Image")));
			this->btnMostrarLibros->Location = System::Drawing::Point(583, 368);
			this->btnMostrarLibros->Name = L"btnMostrarLibros";
			this->btnMostrarLibros->Size = System::Drawing::Size(117, 53);
			this->btnMostrarLibros->TabIndex = 20;
			this->btnMostrarLibros->Text = L"Mostrar Libros";
			this->btnMostrarLibros->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMostrarLibros->UseVisualStyleBackColor = false;
			this->btnMostrarLibros->Click += gcnew System::EventHandler(this, &frmLibro::btnMostrarLibros_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(123, 466);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 15);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Volumen: ";
			// 
			// txtVolumen
			// 
			this->txtVolumen->Location = System::Drawing::Point(190, 465);
			this->txtVolumen->Name = L"txtVolumen";
			this->txtVolumen->Size = System::Drawing::Size(121, 20);
			this->txtVolumen->TabIndex = 26;
			// 
			// frmLibro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(849, 537);
			this->Controls->Add(this->txtVolumen);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnMostrarLibros);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnRegistrarLibro);
			this->Controls->Add(this->cboCategoriaLibro);
			this->Controls->Add(this->txtAñoEdicionLibro);
			this->Controls->Add(this->txtCostoLibro);
			this->Controls->Add(this->txtEditorialLibro);
			this->Controls->Add(this->txtNombreAutorLibro);
			this->Controls->Add(this->txtNombreLibro);
			this->Controls->Add(this->txtIDlibro);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblPrecioLibro);
			this->Controls->Add(this->lblCategoriaLibro);
			this->Controls->Add(this->lblAñoEdicionLibro);
			this->Controls->Add(this->lblEditorialLibro);
			this->Controls->Add(this->lblNombreAutorLibro);
			this->Controls->Add(this->lblNombreLibro);
			this->Controls->Add(this->lblIDlibro);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmLibro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Libro";
			this->Load += gcnew System::EventHandler(this, &frmLibro::frmLibro_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnMostrarLibros_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		frmListaLibros^ listaLibros = gcnew frmListaLibros;
		listaLibros->Show();
		ifstream archivoLibrosEntrada("Libros.dat", ios::binary | ios::app | ios::in);
		if (!archivoLibrosEntrada)
		{
			throw gcnew Exception("No se pudo abrir el archivo");
		}
		Libro leerLibro;
		archivoLibrosEntrada.read(reinterpret_cast<char*>(&leerLibro), sizeof(Libro));
		while (!archivoLibrosEntrada.eof())
		{
			System::String^ nombreL = marshal_as<System::String^>(leerLibro.obtenerNombreLibro());
			System::String^ nombreA = marshal_as<System::String^>(leerLibro.obtenerNombreAutor());
			System::String^ editorial = marshal_as<System::String^>(leerLibro.obtenerEditorial());
			System::String^ categoria = marshal_as<System::String^>(leerLibro.obtenerCategoria());
			std::string id = to_string(leerLibro.obtenerIDlibro());
			std::string vol = to_string(leerLibro.obtenerNumeroVolumen());
			std::string año1 = to_string(leerLibro.obtenerAñoEdicion());
			std::string val = to_string(leerLibro.obtenerPrecio());
			System::String^ IdL = marshal_as<System::String^>(id);
			System::String^ volumen = marshal_as<System::String^>(vol);
			System::String^ año = marshal_as<System::String^>(año1);
			System::String^ valor = marshal_as<System::String^>(val);
			listaLibros->dgvLibros->Rows->Add(IdL, nombreL, categoria, año, volumen, nombreA, editorial);
			archivoLibrosEntrada.read(reinterpret_cast<char*>(&leerLibro), sizeof(Libro));
		}

	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void frmLibro_Load(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream archivoLibros("Libros.dat", ios::binary | ios::app | ios::out);
		if (!archivoLibros)
		{
			throw gcnew Exception("No se pudo abrir el archivo");
		}

	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	txtAñoEdicionLibro->Text = "";
	txtCostoLibro->Text = "";
	txtNombreLibro->Text = "";
	txtNombreAutorLibro->Text = "";
	txtEditorialLibro->Text = "";
	txtIDlibro->Text = "";
	cboCategoriaLibro->Text = "";
}
private: System::Void btnRegistrarLibro_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		ofstream archivoLibroSalida("Libros.dat", ios::binary | ios::app | ios::out);
		if (!archivoLibroSalida)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo.");
		}
		ifstream archivoLibroEntrada("Libros.dat", ios::binary | ios::app | ios::in);
		if (!archivoLibroEntrada)
		{
			this->Close();
			throw gcnew Exception("No se pudo abrir el archivo.");
		}
		//ID
		if (txtIDlibro->Text == "")
		{
			throw gcnew Exception("Ingrese el ID.");
		}
		int IdLibro = Convert::ToInt32(txtIDlibro->Text);

		Libro leerLibro;
		archivoLibroEntrada.read(reinterpret_cast<char*>(&leerLibro), sizeof(Libro));
		while (!archivoLibroEntrada.eof())
		{
			int id = leerLibro.obtenerIDlibro();
			if (IdLibro != id)
			{
				archivoLibroEntrada.read(reinterpret_cast<char*>(&leerLibro), sizeof(Libro));
			}
			else
			{
				throw gcnew Exception("El ID ya esta en uso.");
			}

		}
		if (IdLibro <= 0)
		{
			throw gcnew Exception("El ID tiene que ser positivo y mayor que 0.");
		}
		else if (IdLibro > 100)
		{
			throw gcnew Exception("El ID es demasiado grande.");
		}
		//archivoLibroEntrada.close();
		//Nombre
		if (txtNombreLibro->Text == "")
		{
			throw gcnew Exception("Ingrese el nombre del libro.");
		}
		else if (txtNombreLibro->Text->Length < 3)
		{
			throw gcnew Exception("El nombre del libro es demasiado corto.");
		}
		System::String^ nomL = txtNombreLibro->Text;
		//Nombre Autor
		if (txtNombreAutorLibro->Text == "")
		{
			throw gcnew Exception("Ingrese el nombre del autor.");
		}
		else if (txtNombreAutorLibro->Text->Length < 3)
		{
			throw gcnew Exception("El nombre del autor es demasiado corto.");
		}
		System::String^ nomA = txtNombreAutorLibro->Text;
		//Editorial
		if (txtEditorialLibro->Text == "")
		{
			throw gcnew Exception("Ingrese la editorial.");
		}
		else if (txtEditorialLibro->Text->Length < 4)
		{
			throw gcnew Exception("La nombre de la editorial es demasiado corto.");
		}
		System::String^ edit = txtEditorialLibro->Text;
		//Costo
		if (txtCostoLibro->Text == "")
		{
			throw gcnew Exception("Ingrese costo del libro.");
		}
		double valor = Convert::ToDouble(txtCostoLibro->Text);
		if (valor <= 0)
		{
			throw gcnew Exception("El costo del libro tiene que ser positivo y mayor que 0.");
		}
		//Volumen
		if (txtVolumen->Text == "")
		{
			throw gcnew Exception("Ingrese el numero de volumen.");
		}
		int volumen = Convert::ToInt32(txtVolumen->Text);
		if (volumen <= 0)
		{
			throw gcnew Exception("El volumen debe ser positivo y mayor que 0.");
		}
		else if (volumen > 100)
		{
			throw gcnew Exception("El numero de volumen es demasiado grande.");
		}
		//Año de edicion
		if (txtAñoEdicionLibro->Text == "")
		{
			throw gcnew Exception("Ingrese el año de edicion.");
		}
		int año = Convert::ToInt32(txtAñoEdicionLibro->Text);
		if (año > 2021)
		{
			throw gcnew Exception("Año de edicion invalido.");
		}
		else if (año <= 0)
		{
			throw gcnew Exception("El año de edicion tiene que ser positivo y mayor que 0.");
		}
		//Categoria
		if (cboCategoriaLibro->SelectedItem == nullptr)
		{
			throw gcnew Exception("Seleccione la categoria del libro.");
		}
		System::String^ cat = cboCategoriaLibro->SelectedItem->ToString();


		////////////////////////
		std::string nombreLibro = marshal_as<std::string>(nomL);
		std::string nombreAutor = marshal_as<std::string>(nomA);
		std::string editorial = marshal_as<std::string>(edit);
		std::string categoria = marshal_as<std::string>(cat);


		Libro libro(IdLibro, año, volumen, valor, nombreLibro, nombreAutor, editorial, categoria);
		archivoLibroSalida.write(reinterpret_cast<char*>(&libro), sizeof(Libro));
		archivoLibroSalida.close();
		///////////////////////////
		txtAñoEdicionLibro->Text = "";
		txtCostoLibro->Text = "";
		txtEditorialLibro->Text = "";
		txtIDlibro->Text = "";
		txtNombreAutorLibro->Text = "";
		txtNombreLibro->Text = "";
		txtVolumen->Text = "";
		cboCategoriaLibro->Text = "";

	}
	catch (Exception^ excep)
	{
		MessageBox::Show(excep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
