assert "rand is a Fixnum" do
    rand.class == Fixnum
end

assert "rand is a positive value" do
    rand >= 0
end
