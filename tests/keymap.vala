class KeymapTests : Kkc.TestCase {
    public KeymapTests () {
        base ("Keymap");

        add_test ("creation", this.test_creation);
        add_test ("properties", this.test_properties);
        add_test ("lookup", this.test_lookup);
    }

    void test_creation () {
        Kkc.RuleMetadata? metadata;

        metadata = Kkc.RuleMetadata.find ("nonexistent");
        assert (metadata == null);

        metadata = Kkc.RuleMetadata.find ("kana");
        assert (metadata != null);
    }

    void test_properties () {
        var metadata = Kkc.RuleMetadata.find ("kana");
        var rule = new Kkc.Rule (metadata);
        var keymap = rule.get_keymap (Kkc.InputMode.HIRAGANA) as Object;
        Kkc.Keymap parent;
        keymap.get ("parent", out parent);
        keymap.set ("parent", parent);
    }

    void test_lookup () {
        var metadata = Kkc.RuleMetadata.find ("kana");
        var rule = new Kkc.Rule (metadata);
        var keymap = rule.get_keymap (Kkc.InputMode.HIRAGANA);

        string? command;
        command = keymap.lookup_key (new Kkc.KeyEvent.from_string ("(alt r)"));
        assert (command == "register");

        Kkc.KeyEvent? key;
        key = keymap.where_is ("register");
        assert (key.to_string () == "(alt r)");

        var commands = keymap.commands ();
        var entries = keymap.entries ();

        assert (keymap.get_command_label ("register") == "Register Word");
    }
}

int main (string[] args) {
    Test.init (ref args);
    Kkc.init ();

    TestSuite root = TestSuite.get_root ();
    root.add_suite (new KeymapTests ().get_suite ());

    Test.run ();

    return 0;
}
