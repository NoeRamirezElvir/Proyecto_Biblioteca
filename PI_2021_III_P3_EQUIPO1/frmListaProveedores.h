#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaProveedores
	/// </summary>
	public ref class frmListaProveedores : public System::Windows::Forms::Form
	{
	public:
		frmListaProveedores(void)
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
		~frmListaProveedores()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvProveedores;
	protected:

	protected:

	protected:







	private: System::Windows::Forms::Label^ lblProveedores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIDProveedores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombreProveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTelefonoProveedores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colRTN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCiudad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDireccion;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaProveedores::typeid));
			this->dgvProveedores = (gcnew System::Windows::Forms::DataGridView());
			this->lblProveedores = (gcnew System::Windows::Forms::Label());
			this->colIDProveedores = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombreProveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTelefonoProveedores = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colRTN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCiudad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDireccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProveedores))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvProveedores
			// 
			this->dgvProveedores->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			this->dgvProveedores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProveedores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colIDProveedores,
					this->colNombreProveedor, this->colTelefonoProveedores, this->colRTN, this->colFecha, this->colCiudad, this->colDireccion
			});
			this->dgvProveedores->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dgvProveedores->Location = System::Drawing::Point(8, 98);
			this->dgvProveedores->Name = L"dgvProveedores";
			this->dgvProveedores->Size = System::Drawing::Size(743, 450);
			this->dgvProveedores->TabIndex = 0;
			// 
			// lblProveedores
			// 
			this->lblProveedores->AutoSize = true;
			this->lblProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblProveedores->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblProveedores->Location = System::Drawing::Point(265, 23);
			this->lblProveedores->Name = L"lblProveedores";
			this->lblProveedores->Size = System::Drawing::Size(207, 37);
			this->lblProveedores->TabIndex = 1;
			this->lblProveedores->Text = L"Proveedores";
			// 
			// colIDProveedores
			// 
			this->colIDProveedores->HeaderText = L"ID";
			this->colIDProveedores->Name = L"colIDProveedores";
			// 
			// colNombreProveedor
			// 
			this->colNombreProveedor->HeaderText = L"Nombre";
			this->colNombreProveedor->Name = L"colNombreProveedor";
			// 
			// colTelefonoProveedores
			// 
			this->colTelefonoProveedores->HeaderText = L"Telefono";
			this->colTelefonoProveedores->Name = L"colTelefonoProveedores";
			// 
			// colRTN
			// 
			this->colRTN->HeaderText = L"RTN";
			this->colRTN->Name = L"colRTN";
			// 
			// colFecha
			// 
			this->colFecha->HeaderText = L"Fecha";
			this->colFecha->Name = L"colFecha";
			// 
			// colCiudad
			// 
			this->colCiudad->HeaderText = L"Ciudad";
			this->colCiudad->Name = L"colCiudad";
			// 
			// colDireccion
			// 
			this->colDireccion->HeaderText = L"Direccion";
			this->colDireccion->Name = L"colDireccion";
			// 
			// frmListaProveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(761, 560);
			this->Controls->Add(this->lblProveedores);
			this->Controls->Add(this->dgvProveedores);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaProveedores";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lista de Proveedores";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProveedores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
