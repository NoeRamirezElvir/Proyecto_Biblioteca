#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaSucursales
	/// </summary>
	public ref class frmListaSucursales : public System::Windows::Forms::Form
	{
	public:
		frmListaSucursales(void)
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
		~frmListaSucursales()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvListaSucursal;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCiudad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDir;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEmpleados;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaSucursales::typeid));
			this->dgvListaSucursal = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCiudad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDir = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEmpleados = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaSucursal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvListaSucursal
			// 
			this->dgvListaSucursal->BackgroundColor = System::Drawing::Color::MediumAquamarine;
			this->dgvListaSucursal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaSucursal->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colId,
					this->colName, this->colCiudad, this->colDir, this->colEmpleados
			});
			this->dgvListaSucursal->Location = System::Drawing::Point(12, 75);
			this->dgvListaSucursal->Name = L"dgvListaSucursal";
			this->dgvListaSucursal->Size = System::Drawing::Size(541, 225);
			this->dgvListaSucursal->TabIndex = 0;
			// 
			// colId
			// 
			this->colId->HeaderText = L"ID";
			this->colId->Name = L"colId";
			// 
			// colName
			// 
			this->colName->HeaderText = L"Nombre";
			this->colName->Name = L"colName";
			// 
			// colCiudad
			// 
			this->colCiudad->HeaderText = L"Ciudad";
			this->colCiudad->Name = L"colCiudad";
			// 
			// colDir
			// 
			this->colDir->HeaderText = L"Dirección";
			this->colDir->Name = L"colDir";
			// 
			// colEmpleados
			// 
			this->colEmpleados->HeaderText = L"Cant. de Empleados";
			this->colEmpleados->Name = L"colEmpleados";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(214, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sucursales";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(352, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(77, 70);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(425, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(56, 50);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(487, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(52, 50);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// frmListaSucursales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->ClientSize = System::Drawing::Size(565, 340);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvListaSucursal);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaSucursales";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lista Sucursales";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaSucursal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
