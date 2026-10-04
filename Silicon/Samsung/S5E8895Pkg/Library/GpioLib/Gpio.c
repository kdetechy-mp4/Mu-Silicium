#include <Library/GpioLib.h>

STATIC
EFI_GPIO_CONTROLLER_DATA
gGpioControllers[] = {
  // Pinctrl Address - Bank ID, Bank Number, Bank Offset
  {
    .Address    = 0x104D0000,
    {
      {
        .Id     = BANK_ID_B,
        .Number = 1,
        .Offset = 0x80
      },
      {
        .Id     = BANK_ID_E,
        .Number = 7,
        .Offset = 0xA0
      },
      {
        .Id     = BANK_ID_F,
        .Number = 1,
        .Offset = 0xC0
      },
      {
        .Id     = BANK_ID_D,
        .Number = 0,
        .Offset = 0x0
      },
      {
        .Id     = BANK_ID_D,
        .Number = 1,
        .Offset = 0x20
      },
      {
        .Id     = BANK_ID_D,
        .Number = 2,
        .Offset = 0x40
      },
      {
        .Id     = BANK_ID_D,
        .Number = 3,
        .Offset = 0x60
      }
    }
  },
  {
    .Address    = 0x10980000,
    {
      {
        .Id     = BANK_ID_C,
        .Number = 0,
        .Offset = 0x20
      },
      {
        .Id     = BANK_ID_C,
        .Number = 1,
        .Offset = 0x40
      },
      {
        .Id     = BANK_ID_C,
        .Number = 2,
        .Offset = 0x60
      },
      {
        .Id     = BANK_ID_C,
        .Number = 3,
        .Offset = 0x80
      },
      {
        .Id     = BANK_ID_K,
        .Number = 0,
        .Offset = 0xA0
      },
      {
        .Id     = BANK_ID_E,
        .Number = 5,
        .Offset = 0xC0
      },
      {
        .Id     = BANK_ID_E,
        .Number = 6,
        .Offset = 0xE0
      },
      {
        .Id     = BANK_ID_E,
        .Number = 2,
        .Offset = 0x100
      },
      {
        .Id     = BANK_ID_E,
        .Number = 3,
        .Offset = 0x120
      },
      {
        .Id     = BANK_ID_E,
        .Number = 4,
        .Offset = 0x140
      },
      {
        .Id     = BANK_ID_E,
        .Number = 1,
        .Offset = 0x180
      },
      {
        .Id     = BANK_ID_F,
        .Number = 0,
        .Offset = 0x160
      },
      {
        .Id     = BANK_ID_G,
        .Number = 0,
        .Offset = 0x1A0
      },
      {
        .Id     = BANK_ID_B,
        .Number = 0,
        .Offset = 0x0
      }
    }
  },
  {
    .Address    = 0x11050000,
    {
      {
        .Id     = BANK_ID_I,
        .Number = 0,
        .Offset = 0x0
      },
      {
        .Id     = BANK_ID_I,
        .Number = 1,
        .Offset = 0x20
      }
    }
  },
  {
    .Address    = 0x11430000,
    {
      {
        .Id     = BANK_ID_J,
        .Number = 1,
        .Offset = 0x0
      },
      {
        .Id     = BANK_ID_J,
        .Number = 0,
        .Offset = 0x20
      }
    }
  },
  {
    .Address    = 0x14080000,
    {
      {
        .Id     = BANK_ID_H,
        .Number = 2,
        .Offset = 0x0
      }
    }
  },
  {
    .Address    = 0x15A30000,
    {
      {
        .Id     = BANK_ID_B,
        .Number = 2,
        .Offset = 0x0
      }
    }
  },
  {
    .Address    = 0x164B0000,
    {
      {
        .Id     = BANK_ID_A,
        .Number = 0,
        .Offset = 0x20
      },
      {
        .Id     = BANK_ID_A,
        .Number = 1,
        .Offset = 0x40
      },
      {
        .Id     = BANK_ID_A,
        .Number = 2,
        .Offset = 0x60
      },
      {
        .Id     = BANK_ID_A,
        .Number = 3,
        .Offset = 0x80
      },
      {
        .Id     = BANK_ID_A,
        .Number = 4,
        .Offset = 0xA0
      }
    }
  },
  {
    .Address    = 0x17C60000,
    {
      {
        .Id     = BANK_ID_H,
        .Number = 0,
        .Offset = 0x0
      },
      {
        .Id     = BANK_ID_H,
        .Number = 1,
        .Offset = 0x20
      },
      {
        .Id     = BANK_ID_H,
        .Number = 2,
        .Offset = 0x40
      }
    }
  }
};

VOID
GetGpioControllerData (
  OUT EFI_GPIO_CONTROLLER_DATA **Data,
  OUT UINT8                     *Count)
{
  // Pass Data
  *Data  = gGpioControllers;
  *Count = ARRAY_SIZE (gGpioControllers);
}
