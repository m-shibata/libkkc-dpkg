/* kkc-test.vapi generated by valac 0.24.0.131-42e78, do not modify. */

namespace Kkc {
	namespace TestUtils {
		[CCode (cheader_filename = "libkkc-test.h")]
		public static void check_conversion_result (Kkc.Context context, Json.Object expected);
		[CCode (cheader_filename = "libkkc-test.h")]
		public static void do_conversions (Kkc.Context context, string filename);
		[CCode (cheader_filename = "libkkc-test.h")]
		public static void remove_dir (string name) throws GLib.Error;
	}
	[CCode (cheader_filename = "libkkc-test.h")]
	public abstract class TestCase : GLib.Object {
		public delegate void TestMethod ();
		public TestCase (string name);
		public void add_test (string name, Kkc.TestCase.TestMethod test);
		public GLib.TestSuite get_suite ();
		public virtual void set_up ();
		public virtual void tear_down ();
	}
}
