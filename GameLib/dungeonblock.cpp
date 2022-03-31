//arat (2 kez)

			STATEMANAGER.SetVertexShader(ms_pnt2VS);
			LPDIRECT3DVERTEXBUFFER8 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();

//değiştir (2 kez)

			STATEMANAGER.SetVertexDeclaration(ms_pnt2VS);
			LPDIRECT3DVERTEXBUFFER9 lpd3dRigidPNTVtxBuf = m_pModel->GetPNTD3DVertexBuffer();