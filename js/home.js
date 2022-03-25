function a() {
    const targetDiv = document.getElementById("div3");
    if (targetDiv.style.display !== "none") {
        targetDiv.style.display = "none";
    } else {
        targetDiv.style.display = "block";
    }
};