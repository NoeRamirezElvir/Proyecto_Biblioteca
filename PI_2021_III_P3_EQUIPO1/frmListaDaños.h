#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaDaños
	/// </summary>
	public ref class frmListaDaños : public System::Windows::Forms::Form
	{
	public:
		frmListaDaños(void)
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
		~frmListaDaños()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvDaños; 
	protected:




	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colID;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colTipoDaño;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCostoDaño;
















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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaDaños::typeid));
			this->dgvDaños = (gcnew System::Windows::Forms::DataGridView());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->colID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipoDaño = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colCostoDaño = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDaños))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvDaños
			// 
			this->dgvDaños->BackgroundColor = System::Drawing::Color::LightCyan;
			this->dgvDaños->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDaños->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colID, this->colTipoDaño,
					this->colCostoDaño
			});
			this->dgvDaños->Location = System::Drawing::Point(12, 100);
			this->dgvDaños->Name = L"dgvDaños";
			this->dgvDaños->Size = System::Drawing::Size(393, 408);
			this->dgvDaños->TabIndex = 0;
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblTitulo->Location = System::Drawing::Point(48, 47);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(303, 25);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Lista de Daños Registrados";
			// 
			// colID
			// 
			this->colID->HeaderText = L"ID";
			this->colID->Name = L"colID";
			// 
			// colTipoDaño
			// 
			this->colTipoDaño->HeaderText = L"Tipo de daño";
			this->colTipoDaño->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Ninguno", L"Paginas rayadas", L"Extravio",
					L"Otro"
			});
			this->colTipoDaño->Name = L"colTipoDaño";
			this->colTipoDaño->Width = 150;
			// 
			// colCostoDaño
			// 
			dataGridViewCellStyle1->Format = L"{0:F}";
			this->colCostoDaño->DefaultCellStyle = dataGridViewCellStyle1;
			this->colCostoDaño->HeaderText = L"Costo por daño";
			this->colCostoDaño->Name = L"colCostoDaño";
			// 
			// frmListaDaños
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(420, 520);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->dgvDaños);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaDaños";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro de Daños";
			this->Load += gcnew System::EventHandler(this, &frmListaDaños::frmListaDaños_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDaños))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void frmListaDaños_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
