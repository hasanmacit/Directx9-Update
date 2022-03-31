//arat

RECT rect = {0, 0, m_dwWidth, m_dwHeight};

//değiştir

RECT rect = {0, 0, static_cast<LONG>(m_dwWidth), static_cast<LONG>(m_dwHeight)};

//arat

RECT posRect = {dwxPos, dwyPos, dwxPos+dwImageWidth, dwyPos+dwImageHeight};

//değiştir

RECT posRect = { static_cast<LONG>(dwxPos), static_cast<LONG>(dwyPos), static_cast<LONG>(dwxPos+dwImageWidth), static_cast<LONG>(dwyPos+dwImageHeight)};