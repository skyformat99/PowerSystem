using System;
using System.IO;
namespace ExcelLibrary.BinaryFileFormat
{
	public class STANDARDWIDTH : Record
	{
		public ushort DefaultColumnWidth;
		public STANDARDWIDTH(Record record) : base(record)
		{
		}
		public STANDARDWIDTH()
		{
			this.Type = 153;
		}
		public override void Decode()
		{
			MemoryStream input = new MemoryStream(this.Data);
			BinaryReader binaryReader = new BinaryReader(input);
			this.DefaultColumnWidth = binaryReader.ReadUInt16();
		}
		public override void Encode()
		{
			MemoryStream memoryStream = new MemoryStream();
			BinaryWriter binaryWriter = new BinaryWriter(memoryStream);
			binaryWriter.Write(this.DefaultColumnWidth);
			this.Data = memoryStream.ToArray();
			this.Size = checked((ushort)this.Data.Length);
			base.Encode();
		}
	}
}
