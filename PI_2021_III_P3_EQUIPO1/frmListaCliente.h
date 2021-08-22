#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaCliente
	/// </summary>
	public ref class frmListaCliente : public System::Windows::Forms::Form
	{
	public:
		frmListaCliente(void)
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
		~frmListaCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dgvListaClientes;
	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIDcliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombreCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDireccionCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAñoingresoC;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colTipoMembresiaCliente;
	private: System::Windows::Forms::DataGridViewLinkColumn^ colCorreoCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colOcupacionCliente;

































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaCliente::typeid));
			this->dgvListaClientes = (gcnew System::Windows::Forms::DataGridView());
			this->colIDcliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombreCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDireccionCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAñoingresoC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipoMembresiaCliente = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colCorreoCliente = (gcnew System::Windows::Forms::DataGridViewLinkColumn());
			this->colOcupacionCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaClientes))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvListaClientes
			// 
			this->dgvListaClientes->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dgvListaClientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaClientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colIDcliente,
					this->colNombreCliente, this->colDireccionCliente, this->colAñoingresoC, this->colTipoMembresiaCliente, this->colCorreoCliente,
					this->colOcupacionCliente
			});
			this->dgvListaClientes->Location = System::Drawing::Point(13, 96);
			this->dgvListaClientes->Name = L"dgvListaClientes";
			this->dgvListaClientes->Size = System::Drawing::Size(814, 445);
			this->dgvListaClientes->TabIndex = 0;
			// 
			// colIDcliente
			// 
			this->colIDcliente->HeaderText = L"ID";
			this->colIDcliente->Name = L"colIDcliente";
			// 
			// colNombreCliente
			// 
			this->colNombreCliente->HeaderText = L"Nombre";
			this->colNombreCliente->Name = L"colNombreCliente";
			// 
			// colDireccionCliente
			// 
			this->colDireccionCliente->HeaderText = L"Direccion";
			this->colDireccionCliente->Name = L"colDireccionCliente";
			// 
			// colAñoingresoC
			// 
			this->colAñoingresoC->HeaderText = L"Año de ingreso";
			this->colAñoingresoC->Name = L"colAñoingresoC";
			this->colAñoingresoC->Width = 110;
			// 
			// colTipoMembresiaCliente
			// 
			this->colTipoMembresiaCliente->HeaderText = L"Tipo de membresia";
			this->colTipoMembresiaCliente->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Clasica", L"Premium", L"Mixta" });
			this->colTipoMembresiaCliente->Name = L"colTipoMembresiaCliente";
			this->colTipoMembresiaCliente->Width = 150;
			// 
			// colCorreoCliente
			// 
			this->colCorreoCliente->HeaderText = L"Correo electronico";
			this->colCorreoCliente->Name = L"colCorreoCliente";
			this->colCorreoCliente->Width = 110;
			// 
			// colOcupacionCliente
			// 
			this->colOcupacionCliente->HeaderText = L"Ocupacion";
			this->colOcupacionCliente->Name = L"colOcupacionCliente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(255, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(325, 40);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Clientes Registrados";
			// 
			// frmListaCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(837, 553);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvListaClientes);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Clientes Registrados";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaClientes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
