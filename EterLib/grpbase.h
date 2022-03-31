//arat

		static LPDIRECT3D8				ms_lpd3d;
		static LPDIRECT3DDEVICE8		ms_lpd3dDevice;
		static ID3DXMatrixStack*		ms_lpd3dMatStack;
		static D3DVIEWPORT8				ms_Viewport;

		static DWORD					ms_faceCount;
		static D3DCAPS8					ms_d3dCaps;
		static D3DPRESENT_PARAMETERS	ms_d3dPresentParameter;

		static DWORD					ms_dwD3DBehavior;
		static DWORD					ms_ptVS;
		static DWORD					ms_pntVS;
		static DWORD					ms_pnt2VS;

//değiştir

		static LPDIRECT3D9				ms_lpd3d;
		static LPDIRECT3DDEVICE9		ms_lpd3dDevice;
		static ID3DXMatrixStack*		ms_lpd3dMatStack;
		static D3DVIEWPORT9				ms_Viewport;

		static DWORD					ms_faceCount;
		static D3DCAPS9					ms_d3dCaps;
		static D3DPRESENT_PARAMETERS	ms_d3dPresentParameter;
		
		static DWORD					ms_dwD3DBehavior;
		static LPDIRECT3DVERTEXDECLARATION9 ms_ptVS;
		static LPDIRECT3DVERTEXDECLARATION9 ms_pntVS;
		static LPDIRECT3DVERTEXDECLARATION9 ms_pnt2VS;

//arat

		static LPDIRECT3DVERTEXBUFFER8	ms_alpd3dPDTVB[PDT_VERTEXBUFFER_NUM];
		static LPDIRECT3DINDEXBUFFER8	ms_alpd3dDefIB[DEFAULT_IB_NUM];

//değiştir

		static LPDIRECT3DVERTEXBUFFER9	ms_alpd3dPDTVB[PDT_VERTEXBUFFER_NUM];
		static LPDIRECT3DINDEXBUFFER9	ms_alpd3dDefIB[DEFAULT_IB_NUM];